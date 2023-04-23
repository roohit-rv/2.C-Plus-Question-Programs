//print a number triangular pattern
#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"enter the numbers of rows and the columns"<<endl;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=(2*i)-1;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
