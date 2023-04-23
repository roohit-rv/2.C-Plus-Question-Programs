/*print the given number pattern
row=4,col=6
121212
212121
121212
212121
*/
#include<iostream>
using namespace std;
int main()
{
	int row, col;
	cout<<"enter the numbers of row and columns"<<endl;
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if((i+j)%2==0)
			{
				cout<<1;
			}
			else
			{
				cout<<2;
			}
			
			
		}
		cout<<endl;
	}
}
