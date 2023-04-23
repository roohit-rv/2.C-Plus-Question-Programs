/* Find the sum of the following series

 1 - 2 + 3 - 4 … n
*/
#include<iostream>
using namespace std;
int main()
{
	int n,ans;
	cout<<"enter the limits of the series number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		ans=ans-i;	
		}
		else
		{
			ans=ans+i;
		}
	}
	cout<<ans<<endl;
	return 0;
}
