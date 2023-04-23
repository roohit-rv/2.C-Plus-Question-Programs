//Print the nth factorial number
#include<iostream>
using namespace std;
int main()
{
	int n,ans=1;
	cout<<"enter any number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		ans=ans*i;
		
	}
	cout<<ans<<endl;
	return 0;
}
