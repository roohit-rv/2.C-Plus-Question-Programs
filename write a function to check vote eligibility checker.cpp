//vote eligibility checker
#include<iostream>
using namespace std;
void checker(int aged)
{
	if(aged>=18)
	{
		cout<<"yes you are eligible to vote"<<endl;
	}
	else
	{
		cout<<"no dumbshit you are not go and watch pogo"<<endl;
	}
}
int main()
{
	cout<<"enter your age"<<endl;
	int age;
	cin>>age;
	checker(age);
	return 0;
}
