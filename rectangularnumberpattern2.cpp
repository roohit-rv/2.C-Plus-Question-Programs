/*Print a rectangular pattern as shown in the example below.

Example if row=4,col=6

123456
123456
123456
123456
*/
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"enter the number of rows and columns"<<endl;
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
