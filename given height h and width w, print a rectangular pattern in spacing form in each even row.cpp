//given height h and width w, print a rectangular pattern in spacing form in each even row
#include<iostream>
using namespace std;
int main()
{
	int h,w;
	cout<<"enter the height and width of the rectangle"<<endl;
	cin>>h>>w;
	for(int i=1;i<=h;i++)
	{
		
		for(int j=1;j<=w;j++)
		{
			if((i+j)%2!=0)
			{
				cout<<(".");
			}
			else
			{
			cout<<("*");	
			}
			
			
		}
		cout<<endl;
	}
	return 0;
}
