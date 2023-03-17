//Write a program in C++ to count the digits of a given number using recursion.

#include <iostream>
using namespace std;

int digits_count(int Number);

int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"The number of digits in the number is: "<<digits_count(num)<<endl;
    return 0;
}

int digits_count(int Number)
{
    static int count = 0;
    if(Number<10)
    {
        return count++;
    }
    else{
        Number = Number/10;
        count++;
        digits_count(Number);
    }
    return count;
}
