//Write a program to calculate the sum of the first and the second last digit of a 5 digit number
#include<iostream>
using namespace std;
int main()
{
  int n, first, second, third, fourth, fifth;
  n=12345;
  
  first=n/10000;
  n=n%10000;
  second=n/1000;
  n=n%1000;
  third=n/100;
  n=n%100;
  fourth=n/10;
  fifth=n%10;
  cout<<first+fourth<<endl;
	
	return 0;
}
