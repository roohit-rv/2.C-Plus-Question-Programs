/*print the given  number triangle pattern
     1
    121
   12321
  1234321
  */
#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"enter the number of rows"<<endl;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<k;
		}
		for(int l=i-1;l>0;l--)
		{
			cout<<l;
		}
		cout<<endl;
	}
 } 
