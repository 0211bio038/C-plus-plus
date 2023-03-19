//Write a C++ program to find the Hailstone Sequence of a given number up to 1. 

#include <iostream>
using namespace std;

void hailstone_seq(int Number);

int main()
{
    int n1;
    cout<<"Input any number (positive) to start for Hailstone Sequence: ";
    cin>>n1;
    cout<<"The hailstone sequence starting at "<<n1<<" is: "<<endl;
    hailstone_seq(n1);
    return 0;
}

void hailstone_seq(int Number)
{
    static int count = 0;
    if(Number == 1)
    {
        cout<<Number<<" "<<endl;
        count++;
        cout<<"The length of the sequence is "<<count<<endl;
        return;
    }
    else{
        cout<<Number<<" ";
        count++;
        if(Number % 2 == 0)
        {
            Number = Number/2;
        }
        else{
            Number = Number * 3 + 1;
        }
        hailstone_seq(Number);
    }
    return;
}
