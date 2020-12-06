// write a C++ program
/*

 * * * * *
 * * * *
 * * *
 * *
 *
 
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=n;i>=1;i--)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<"* ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//inverted half pyramid
/* 

 *
 * *  
 * * *
 * * * *
 * * * * * 

*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<"* ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//now print the half pyramid after 180degree rotation
/*

        *
      * *
    * * *
  * * * *
* * * * *
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n-i;j++)
  	{
  		cout<<"  ";
	  }
	for(j=1; j<=i; j++)
	{
		cout<<"* ";
	}
	  cout<<endl;
  }
 return 0;
}*/

//Print Half Pyramid using numbers
/*
 1
 1 2
 1 2 3 
 1 2 3 4
 1 2 3 4 5 
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<j<<" ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print Inverted Half Pyramid using numbers
/*
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
*/

/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=n;i>=1;i--)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<j<<" ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print Half Pyramid using numbers - 2
/*

 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<i<<" ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print Inverted Half Pyramid using numbers - 2
/*

 1 1 1 1 1
 2 2 2 2 
 3 3 3 
 4 4
 5
 
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n-i+1;j++)
  	{
  		cout<<i<<" ";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print Floyd's Triangle
/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i,count=1;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		cout<<count<<" ";
  		count++;
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print 0-1 pattern
/*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1 
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		if((i+j)%2==0)
  		{
  			cout<<"1 ";
		  }
		else
		{
			cout<<"0 ";
		}
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Pattern - 5 Palindromic pattern
/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
/*#include<iostream>

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
    	cout<<"  ";
	}
	for(int j=i; j>=1; j--)
	{
		cout<<j<<" ";
	}
	for(int j=2; j<=i; j++)
	{
		cout<<j<<" ";
	}
	cout<<endl;
  }
 return 0;
}*/

//Print Diamond using Stars : Given n, print diamond with 2*n rows.
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *
*/
/*#include<iostream>

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
    	cout<<"  ";
	}
	for(int j=1; j<=2*i-1; j++)
	{
		cout<< "* ";
	}
	cout<<endl;
  }
  for(int i=n;i>=1;i--)
  {
    for(int j=1; j<=n-i; j++)
    {
    	cout<<"  ";
	}
	for(int j=1; j<=2*i-1; j++)
	{
		cout<< "* ";
	}
	cout<<endl;
  }
 return 0;
}*/

//Print Hollow Diamond using Stars
/* 
    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n:";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			if((j==1) || (j==2*i-1))
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			if((j==1) || (j==2*i-1))
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
*/
//Print Hollow Diamond Inscribed in a Rectangle
/*
	*********
	**** ****
	***   ***
	**     **
	*       *
	*       *
	**     **
	***   ***
	**** ****
	*********
*/
/*#include<iostream>

using namespace std;

int main()
{
  int n,j,i;
  cout<<"Enter the value of n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=5;j>i;j--)
  	{
  		cout<<"*";
	  }
    for(j=1;j<=2*i-1;j++)
		{
			if((j==1) || (j==2*i-1))
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		for(j=5;j>i;j--)
  		{
  		cout<<"*";
	  }
	  cout<<endl;
  }
  
   for(i=n;i>=1;i--)
  {
  	for(j=5;j>i;j--)
  	{
  		cout<<"*";
	  }
    for(j=1;j<=2*i-1;j++)
		{
			if((j==1) || (j==2*i-1))
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		for(j=5;j>i;j--)
  		{
  		cout<<"*";
	  }
	  cout<<endl;
  }
 return 0;
}*/

//Print Solid Rhombus
/*
    ******
   ******
  ******
 ******
******
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}*/
//Print Hollow Rhombus
/*
    *****
   *   *
  *   *
 *   *
*****
*/
/*#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}*/
//Pyramid pattern for Numbers
/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/
/*
#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//Pyramid Pattern for Numbers - 2
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
/*#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//Print Sold Butterfly Pattern
/*
	*        *
	**      **
	***    ***
	****  ****
	**********
	**********
	****  ****
	***    ***
	**      **
	*        *
*/
/*#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n; i>=1; i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}*/
//Print Hollow Butterfly Pattern
/*
	*        *
	**      **
	* *    * *
	*  *  *  *
	*   **   *
	*   **   *
	*  *  *  *
	* *    * *
	**      **
	*        *
*/
/*#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
			cout<<"*";
			
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
			cout<<"*";
			
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
		
		for(i=n; i>=1; i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
			cout<<"*";
			
			}
			else
			{
				cout<<" ";
			}
		}
		for(j=1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
			cout<<"*";
			
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}*/
//Print Pascal's Triangle
/*
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/
/*#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	int coef=1;
	for(i=0; i<n; i++)
	{
		for(j=0;j<n-i+1;j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			{
				coef = 1;
			}
			else 
			{
				coef = coef * (i - j + 1) / j;
			}
			cout<<coef<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//Zig-Zag Pattern
/*
    *       *
  *   *   *   *
*       *       *
*/
/*#include<iostream>

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
}*/

