//Write a program in C++ to find the smallest element in a sequence by recursion.

#include <iostream>
using namespace std;

int smallest_number(int A[], int size);

int main()
{
    int n;
    cout<<"Input the total length of sequence: ";
    cin>>n;
    int my_array[n] = {0};
    cout<<"Enter the elements of sequence: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>my_array[i];
    }
    cout<<"Smallest element in the given squence is: "<<smallest_number(my_array, n-1);
    return 0;
}

int smallest_number(int A[], int size)
{
    static int result = A[0];
    if(size == 0)
    {
        return result;
    }
    else{
        if(result > A[size])
        {
            result = A[size];
        }
        smallest_number(A, size-1);
    }
    return result;
}
