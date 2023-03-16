//Check if the number is Prime or Not by recursion.

#include <iostream>
using namespace std;

bool Prime(int a, int num);

int main()
{
    int n;
    cout<<"Enter a number to check it is Prime or Not: ";
    cin>>n;
    int num=2;
    if(Prime(n,num)==true)
    {
        cout<<n<<" is a Prime Number."<<endl;
    }
    else{
        cout<<n<<" is NOT a Prime Number."<<endl;
    }
    return 0;
}

bool Prime(int a, int num)
{
    static bool isFlag=true;
    if(num==a)
    {
        return isFlag;
    }
    else{
        if(a%num==0)
        {
            isFlag=false;
        }
    }
    Prime(a,num+1);
    return isFlag;
}
