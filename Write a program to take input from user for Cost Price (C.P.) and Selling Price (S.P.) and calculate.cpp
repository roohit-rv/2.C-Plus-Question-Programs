/*- Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate
Profit or Loss.*/
#include<iostream>
using namespace std;
int main()
{
	int sp, cp;
	cout<<"enter the selling price and cost price of the product"<<endl;
	cin>>sp>>cp;
	if(sp>cp)
	{
		int profit=sp-cp;
		cout<<"profit is "<<profit<<endl;
	}
	
	else if(sp<cp)
	{
	int loss=cp-sp;
		cout<<"loss is "<<loss<<endl;	
	}
		
	
	else
	{
		cout<<"no profit or loss"<<endl;
	}
	return 0;
}
