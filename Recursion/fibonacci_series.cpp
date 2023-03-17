//Write a program in C++ to print the Fibonacci Series using recursion.

#include <iostream>
using namespace std;

int Fibonacci(int a);

int main()
{
    int n;
    cout<<"Input number of terms for the Series: ";
    cin>>n;
    Fibonacci(n);
    return 0;
}

int Fibonacci(int a)
{
    static int first_value = 1, second_value=1, next_value;
    if(a==1)
    {
        next_value = first_value + second_value;
        cout<<first_value<<" "<<second_value<<" "<<next_value<<" ";
        return next_value;
    }
    else{
        Fibonacci(a-1) ;
        first_value = second_value;
        second_value = next_value;
        next_value = first_value + second_value;
        cout<<next_value<<" ";
        return next_value;
    }
}
