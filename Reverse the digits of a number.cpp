//Reverse the digits of a number
#include<iostream>
using namespace std;
int main()
{
	int n,ans=0,rem;
	cout<<"enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		ans=ans*10+rem;
		n=n/10;
	}
	cout<<"reversing the number gives us "<<ans<<endl;
	return 0;
	
}

