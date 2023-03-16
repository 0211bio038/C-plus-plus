//Write a program in C++ to find the given number is Prime or Not by creating Function.

#include <iostream>
using namespace std;

bool PrimeNumber(int a);

int main()
{
    int n;
    cout<<"Enter a number to check it is a prime or not: ";
    cin>>n;
    if(PrimeNumber(n)==true)
    {
        cout<<n<<" is a Prime Number."<<endl;
    }
    else{
        cout<<n<<" is NOT a Prime Number."<<endl;
    }
    return 0;
}

bool PrimeNumber(int a)
{
    bool isFlag=true;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            isFlag=false;
            break;
        }
    }
    return isFlag;
}
