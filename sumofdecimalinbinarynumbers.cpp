//sum of decimal in binary numbers
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int sum=0;
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;
	int rem, power=1, ans=0;
	while(sum!=0)
	{
		rem=sum%2;
		ans=ans+(rem*power);
		power*=10;
		sum=sum/2;
		
	}
	cout<<ans<<endl;
	return 0;
}
