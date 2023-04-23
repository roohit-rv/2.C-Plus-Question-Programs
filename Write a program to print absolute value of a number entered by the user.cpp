//Write a program to print absolute value of a number entered by the user
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n<0)
	{
		n=n*(-1);
	}
	cout<<"absolute value is "<<n<<endl;
	return 0;
}
