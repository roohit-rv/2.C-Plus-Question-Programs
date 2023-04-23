//Given h, print a increasing star pattern
#include<iostream>
using namespace std;
int main()
{
	int h;
	cout<<"enter the height of the pattern"<<endl;
	cin>>h;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
