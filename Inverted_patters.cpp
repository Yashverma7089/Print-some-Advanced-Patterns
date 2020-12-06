// write a C++ program

#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter the value of n: ";
  cin>>n;
  cout<<endl;
  for(int i=n;i>=1;i--)
  {
  	for(int j=1; j<=i; j++)
  	{
  		cout<<j<<" ";
	  }
	  cout<<endl;
  }
 return 0;
}

