// write a C++ program
/*

    1
   1 2 
  1 2 3
 1 2 3 4 
1 2 3 4 5

*/

#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter the value of n: ";
  cin>>n;
  cout<<endl;
  for(int i=1;i<=n;i++)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<" ";
	}
	for(int j=1; j<=i; j++)
	{
		cout<<j<<" ";
	}
	cout<<endl;
  }
 return 0;
}



/*
          *
	*  *
       *    *
      *      *
     **********
     */

#include <iostream>
using namespace std;
int main()
{
int n, x, y, s;
cout << "Enter number of rows to show the star pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
//for loop to put space in pyramid
for (s = x; s < n; s++)
cout << " ";
//for loop to print star
for(y = 1; y <= (2 * n - 1); y++)
{
if(x == n || y == 1 || y == 2 * x - 1)
cout << "*";
else
cout << " ";
}
cout << "\n";
}
return 0;
}
