// write a C++ program
/*

    *      *
  *   *  *   *
*      *       * 

*/

#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter the value of n: ";
  cin>>n;
  cout<<endl;
  
  for(int i=1;i<=3;i++)
  {
  	for(int j=1;j<=n;j++)
  	{
  		if(((i+j)%4==0) || (i==2 && j%4==0))
  		{
  			cout<<"* ";
		}
		else
		{
		  cout<<"  ";	
		}
	  }
	  cout<<endl;
  }
 return 0;
}

