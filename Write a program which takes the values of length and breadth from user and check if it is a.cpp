/*Write a program which takes the values of length and breadth from user and check if it is a
square or not*/
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"enter the length and the breadth"<<endl;
	cin>>x>>y;
	if(x==y)
	{
		cout<<"it is a square"<<endl;
	}
	else
	{
		cout<<"it is a rectangle"<<endl;
	}
	return 0;
}
