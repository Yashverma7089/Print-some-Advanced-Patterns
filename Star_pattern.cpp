// write a C++ program
/*
        * 
      * * *
    * * * * * 
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * *
        * 

*/

#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter the value of n: ";
  cin>>n;
  cout<<endl;
  //we can print this pattern in two ways : 
  // This is the first way to print this patter
 /* for(int i=1;i<=n;i++)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<"  ";
	}
	for(int j=i; j>=1; j--)
	{
		cout<<"* ";
	}
	for(int j=2; j<=i; j++)
	{
		cout<<"* ";
	}
	cout<<endl;
  }
  
  for(int i=n;i>=1;i--)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<"  ";
	}
	for(int j=i; j>=1; j--)
	{
		cout<<"* ";
	}
	for(int j=2; j<=i; j++)
	{
		cout<<"* ";
	}
	cout<<endl;
  }*/
 
 //this is the another way to print this pattern 
  for(int i=1;i<=n;i++)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<"  ";
	}
	for(int j=1; j<=(2*i)-1; j++)
	{
		cout<<"* ";
	}
	cout<<endl;
  }
  
  for(int i=n;i>=1;i--)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<"  ";
	}
	for(int j=1; j<=(2*i)-1; j++)
	{
		cout<<"* ";
	}
	cout<<endl;
  }
 return 0;
}

