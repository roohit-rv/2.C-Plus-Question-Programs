//Given h, print a decreasing star pattern
#include<iostream>
using namespace std;
int main()
{
	int h;
	cout<<"enter the height of the pattern"<<endl;
	cin>>h;
	for(int i=h;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
