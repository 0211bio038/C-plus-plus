//Write a program in C++ to find a given number is Happy number or not.

#include <iostream>
using namespace std;

bool happy_number(int num);

int main()
{
    int n;
    cout<<"Input a number to check if it is Happy Number or Not: ";
    cin>>n;
    if(happy_number(n) == true)
    {
        cout<<n<<" is a Happy Number.";
    }
    else{
        cout<<n<<" is NOT a Happy Number.";
    }
    return 0;
}

bool happy_number(int num)
{
    static bool isflag = false;
    if(num<10)
    {
        if(num == 1)
        {
            isflag = true;
        }
        return isflag;
    }
    else{
        int result = 0; 
        while(num >= 1)
        {
            int rem = num % 10;
            num = num / 10;
            result = result + rem * rem;
        }
        num = result;
        happy_number(num);
    }
    return isflag;
}
