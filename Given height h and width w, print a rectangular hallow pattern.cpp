//Given height h and width w, print a rectangular hallow pattern 
#include<iostream>
using namespace std;
int main()
{
	int h,w;
	cout<<"enter the height and width of the rectangle"<<endl;
	cin>>h>>w;
	for(int i=0;i<h;i++)
	{
		
		for(int j=0;j<w;j++)
		{
			
			if(i==0 || i==h-1 || j==0 || j==w-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}

