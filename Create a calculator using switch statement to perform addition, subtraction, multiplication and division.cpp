//Create a calculator using switch statement to perform addition, subtraction, multiplication and division
#include<iostream>
using namespace std;
int main()
{
	char sign;
	cout<<"enter an operator"<<endl;
	cin>>sign;
	int a, b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	switch(sign)
	{
		case '+':
			cout<<a+b<<endl;
			break;
			
		case '-':
		cout<<a-b<<endl;
		break;
		
		case '/':
		cout<<a/b<<endl;
		break;
		
		case '*':
		cout<<a*b<<endl;
		break;
		
		default :
		cout<<"enter valid input"<<endl;
		break;	
	}
	return 0;
}
