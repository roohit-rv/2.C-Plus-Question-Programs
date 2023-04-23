#include<iostream>
using namespace std;
int main()
{
	
	cout<<"armstrong number from between to 500"<<endl;
	for(int i=101;i<=500;i++)
	{
		int sum=0;
		int r;
		int n=i;
		while(n!=0)
		{
			r=n%10;
			sum=sum+(r*r*r);
			n=n/10;
		}
		if(sum==i)
		{
			cout<<sum<<endl;
		}

	}
	
	return 0;
}
