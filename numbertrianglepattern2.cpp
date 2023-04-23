/*print the give triangular pattern
         1
       2  2
      3    3
     4      4
     */
    
#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"enter the number of rows"<<endl;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
			{
				cout<<i;
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}
