//Write a program in C++ to find the sum of digits of a number using recursion.

#include <iostream>
using namespace std;

int digits_sum(int Number);

int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"The Sum of digits of "<<num<<" is: "<<digits_sum(num)<<endl;
    return 0;
}

int digits_sum(int Number)
{
    static int sum = 0;
    if(Number<10)
    {
        sum = sum + Number;
        return sum;
    }
    else{
        int rem = Number % 10;
        Number = Number/10;
        sum = sum + rem;
        digits_sum(Number);
    }
    return sum;
}
