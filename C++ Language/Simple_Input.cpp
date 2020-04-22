//TO PRINT NUMBERS ENTERED BY THE USER TILL ITS SUM IS NEGATIVE
/*Input=2
        88
       -10
       -100
       
       Output
       2
       88
       -10
 */

#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int sum=0;
  while(sum+n>=0)
   {
      sum+n;
      cout<<n<<endl;
      cin>>n;
   }
 return0;
 }
