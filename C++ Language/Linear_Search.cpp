#include<iostream>
using namespace std;
int main()
{
  int a[50],n,search,i;
  cout<<"Enter the size of the array: ";
  cin>>n;
  cout<<"Enter array: \n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the number to be searched:";
  cin>>search;
  for(i=0;i<n;i++)
  {
  if(a[i]==search)
  {
   cout<<"The number is present in the "<<i+1 <<" location";
    break; 
  }
  if(i==n)
  cout<<"Number not found.";
  }
  return 0;
}


