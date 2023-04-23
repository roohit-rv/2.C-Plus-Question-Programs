//Given two numbers a and b,Find a raise to the power b?
#include<iostream>
using namespace std;
int main()
{
	int a,b,ans=1;
	cout<<"enter any two number"<<endl;
	cin>>a>>b;
	for(int i=0;i<b;i++)
	{
		ans=ans*a;
	}
	cout<<ans<<endl;
	return 0;
}
