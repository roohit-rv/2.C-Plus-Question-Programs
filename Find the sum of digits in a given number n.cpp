// Find the sum of digits in a given number n
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,num;
	cout<<"enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
		num=n%10;
		sum=sum+num;
		n=n/10;
	}
	cout<<"the sum of the digits in the given number is "<<sum<<endl;
	return 0;
}
