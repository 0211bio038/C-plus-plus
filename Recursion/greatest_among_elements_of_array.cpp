//Write a program in C++ to get the largest element of an array using recursion.

#include <iostream>
using namespace std;

int largest_element(int my_array[], int size);

int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int array[n] = {0};
    cout<<"Enter the elemnts of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"Largest element in the given array is: "<<largest_element(array, n-1)<<endl;
    return 0;
}

int largest_element(int my_array[], int size)
{
    static int result = 0;
    if(size == 0)
    {
        if(result<my_array[size])
        {
            result = my_array[size];
        }
        return result;
    }
    else{
        if(result<my_array[size])
        {
            result = my_array[size];
        }
        largest_element(my_array, size-1);
    }
    return result;
}
