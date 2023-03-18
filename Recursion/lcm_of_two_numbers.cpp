//Write a program in C++ to find the LCM of two numbers using recursion.

#include <iostream>
using namespace std;

int lcm(int Number1, int Number2);

int main()
{
    int n1, n2;
    cout<<"Input 1st Number: ";
    cin>>n1;
    cout<<"Input 2nd Number: ";
    cin>>n2;
    cout<<"LCM of "<<n1<<" and "<<n2<<" is: "<<lcm(n1,n2)<<endl;
    return 0;
}

int lcm(int Number1, int Number2)
{
    static int temp_result = Number2 * Number1, result;
    if(temp_result == 1)
    {
        return result;
    }
    else{
        if((temp_result%Number1 == 0) && (temp_result%Number2 == 0))
        {
            result = temp_result;
        }
        temp_result = temp_result - 1;
        lcm(Number1, Number2);
    }
    return result;
}
