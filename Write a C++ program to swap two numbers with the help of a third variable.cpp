//Write a C++ program to swap two numbers with the help of a third variable
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	a=2;
	b=3;
	cout<<"before swapping a="<<a<<" and b="<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"before swapping a="<<a<<" and b="<<b<<endl;
	
	return 0;
}
