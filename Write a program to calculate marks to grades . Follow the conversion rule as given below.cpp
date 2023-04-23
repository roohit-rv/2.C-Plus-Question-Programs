// Write a program to calculate marks to grades . Follow the conversion rule as given below 
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks"<<endl;
	cin>>marks;
	if(marks<=100&&marks>90)
	{
		cout<<"your grade is A+"<<endl;
	}
	else if(marks<=90&&marks>80)
	{
		cout<<"your grade is A"<<endl;
	}
	else if(marks<=80&&marks>70)
	{
		cout<<"your grade is B+"<<endl;
	}
	else if(marks<=70&&marks>60)
	{
		cout<<"your grade is B"<<endl;
	}
	else if(marks<=60&&marks>50)
	{
		cout<<"your grade is C"<<endl;
	}
    else if(marks<=50&&marks>40)
	{
		cout<<"your grade is D"<<endl;
	}
	else if(marks<=40&&marks>30)
	{
		cout<<"your grade is E"<<endl;
	}
	else if(marks<=30&&marks>0)
	{
		cout<<"your grade is F"<<endl;
	}
	else
	{
		cout<<"enter valid marks"<<endl;
	}
	return 0;
}
