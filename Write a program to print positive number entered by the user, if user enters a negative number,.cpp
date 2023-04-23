/*Write a program to print positive number entered by the user, if user enters a negative number,
it is skipped*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n>0)
	{
		cout<<n<<endl;
	
		
	}
	else
	{
		cout<<"the number is negative and skipped"<<endl;
	}
	return 0;
}
