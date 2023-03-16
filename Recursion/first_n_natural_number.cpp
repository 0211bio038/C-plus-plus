//Write a program in C++ to print the first n natural numbers using recursion.

#include <iostream>
using namespace std;

int NaturalNumber(int a);

int main()
{
    int n;
    cout<<"Enter a number till which you want to print Natural Numbers: ";
    cin>>n;
    NaturalNumber(n);
    return 0;
}

int NaturalNumber(int a)
{
    if(a==1)
    {
        cout<<"1"<<" ";
    }
    else{
        NaturalNumber(a-1);
        cout<<a<<" ";
    }
  return 0;
}
