/*print a rectangular number pattern like
1234567
2345671
3456712
4567123
5671234
6712345
7123456
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any number"<<endl;
	cin>>n;
	for(int i=1;i<=7;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cout<<j;
		}
		for(int k=1;k<i;k++)
		{
			cout<<k;
		}
		cout<<endl;
		
		
	}
	return 0;
}

