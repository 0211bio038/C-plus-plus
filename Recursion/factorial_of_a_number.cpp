//Write a program in C++ to find the Factorial of a number using recursion.

#include <iostream>
using namespace std;

int factorial(int Number);

int main()
{
    int n;
    cout<<"Input a Number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}

int factorial(int Number)
{
    static int result = 1;
    if(Number == 1)
    {
        return result;
    }
    else{
        result = result * Number;
        factorial(Number-1);
    }
    return result;
}
