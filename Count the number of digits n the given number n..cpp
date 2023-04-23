//Count the number of digits n the given number n.
#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	cout<<"total number of digits in the number are "<<count<<endl;
	return 0;
}
