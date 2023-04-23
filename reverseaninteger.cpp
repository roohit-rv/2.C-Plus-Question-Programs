//write a program to reverse an integer
#include<iostream>
using namespace std;
int main()
{
	int n,r,ans=0;
	cout<<"enter any integer"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		ans=ans*10+r;
		n=n/10;
	}
	cout<<ans;
	return 0;
}
