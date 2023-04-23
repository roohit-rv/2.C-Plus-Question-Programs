#include<iostream>
using namespace std;
int main()
{
	int n, factorial=1, i;
	cout<<"enter the number"<<endl;
	cin>>n;
	if(n==0)
	{
		factorial=0;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			factorial=factorial*i;
			
		}
	}
	cout<<factorial<<endl;
	return 0;
}
