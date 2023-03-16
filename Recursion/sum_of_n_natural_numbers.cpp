#include <iostream>
using namespace std;

int SumofNatural(int a);

int main()
{
  int n;
  cout<<"Enter a number till which you want the sum: ";
  cin>>n;
  cout<<endl;
  cout<<"The sum of first "<<n<<"Number is: "<<SumofNatural(n)<<endl;
  return 0;
}

int SumofNatural(int a)
{
  if(a==1)
  {
    return 1;
  }
  else{
    return a + SumofNatural(a-1);
  }
}
