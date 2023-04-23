// Given height h and width w, print a rectangular pattern 
#include<iostream>
using namespace std;
int main()
{
	int h,w;
	cout<<"enter the height and the width"<<endl;
	cin>>h>>w;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
