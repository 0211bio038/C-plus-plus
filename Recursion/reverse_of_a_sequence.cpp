//Write a program in C++ to print the sequence in reverse order by recursion.

#include <iostream>
using namespace std;

int print_array(int arr[],int size);

int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int array[n]={0};
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    print_array(array,n-1);
}

int print_array(int arr[], int size)
{
    if(size==0)
    {
        cout<<arr[size]<<" ";
    }
    else{
        cout<<arr[size]<<" ";
        print_array(arr, size-1);
    }
    return 0;
}
