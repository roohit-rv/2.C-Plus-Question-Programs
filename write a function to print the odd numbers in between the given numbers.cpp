// write a function to print the odd numbers in between the given numbers
#include<iostream>
using namespace std;
void odd(int c, int d)
{
	for(int i=c;i<=d;i++)
	{
		if(i%2!=0)
		{
		cout<<i<<" ";
		}
	}
	return ;
}
int main()
{
	cout<<"enter any two numers to get all odd numbers from it's start to last"<<endl;
	int a, b;
	cin>>a>>b;
	odd(a,b);
	return 0;
}
