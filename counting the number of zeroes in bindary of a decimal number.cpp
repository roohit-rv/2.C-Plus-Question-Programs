//counting the number of zeroes in bindary of a decimal number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any decimal number"<<endl;
	cin>>n;
	int rem, power=1, ans=0;
	while(n!=0)
	{
		rem=n%2;
		ans=ans+(rem*power);
		power*=10;
		n=n/2;
		
	}
	cout<<"the number of zeroes in "<<ans<<" are"<<endl;
	int count=0;
	int remm;
	while(ans!=0)
	{
		remm=ans%10;
		if(remm==0)
		{
			count++;
		}
		ans=ans/10;
		
	}
	cout<<count<<endl;
	return 0;
}
