//Write a program in C++ to find the GCD of two numbers using recursion.

#include <iostream>
using namespace std;

int gcd(int a, int b, int factor);

int main()
{
    int num1,num2,factor;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    if(num1<num2)
    {
        factor = num1;
    }
    else{
        factor = num2;
    }
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is: "<<gcd(num1, num2, factor)<<endl;
    return 0;
}

int gcd(int a, int b, int factor)
{
    static int result = 0;
    if(a % factor == 0 && b % factor == 0)
    {
        result = factor;
        return result;
    }
    else{
        gcd(a,b, factor-1);
    }
    return result;
}
