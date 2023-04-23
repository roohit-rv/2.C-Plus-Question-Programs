//write a function to print all prime numbers from given starting to end numbers
#include<iostream>
using namespace std;
void prime(int c, int d)
{
	
	for(int i=c;i<=d;i++)
	{
		int flag=0;
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
			{
				
			
			flag++;
		}
			
		}
		if(flag==0)
		{
			cout<<i<<" ";
		}
	}
	return ;
}
int main()
{
	cout<<"enter any two numers to get all prime numbers from it's start to last"<<endl;
	int a, b;
	cin>>a>>b;
	prime(a,b);
	return 0;
}
