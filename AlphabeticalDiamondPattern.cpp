// write a program to print alphabetical diamond pattern
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		char ch='A';
	  	for(int j=1;j<=2*i-1;j++)
	  	{
	  		cout<<ch;
	  		ch++;
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		char ch='A';
	  	for(int j=1;j<=2*i-1;j++)
	  	{
	  		cout<<ch;
	  		ch++;
		}
		cout<<endl;
	}
	return 0;
}

