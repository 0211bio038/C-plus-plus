//Write a program in C++ to calculate the power of any number using recursion.

#include <iostream>
using namespace std;

int exponent(int base, int power);

int main()
{
    int n1, n2;
    cout<<"Input the Base value: ";
    cin>>n1;
    cout<<"Input the value of power: ";
    cin>>n2;
    cout<<"The value of "<<n1<<" to the power of "<<n2<<" is: "<<exponent(n1,n2)<<endl;
    return 0;
}

int exponent(int base, int power)
{
    static int result = 1;
    if(power == 0)
    {
        return result;
    }
    else{
        result = result * base;
        exponent(base, power-1);
    }
    return result;
}
