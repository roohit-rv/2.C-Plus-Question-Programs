//return the greatest of binary numbers in the decimal form
#include<iostream>
using namespace std;
int main()
{
	int a=1001, b=100;
	int rem, power=1, ans=0;
	while(a!=0)
	{
		rem=a%10;
		ans=ans+(rem*power);
		power*=2;
		a=a/10;
	}
	cout<<ans<<endl;
	int remm, powerr=1, anss=0;
		while(b!=0)
	{
		remm=b%10;
		anss=anss+(remm*powerr);
		powerr*=2;
		b=b/10;
	}
	cout<<anss<<endl;
	if(ans>anss)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<anss<<endl;
	}
	return 0;
	
}
