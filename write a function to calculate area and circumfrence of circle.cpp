//area and circumfrence of circle
#include<iostream>
#include<cmath>
using namespace std;
float area(int ar)
{
	int a=2;
 int squr=pow(ar,2);
	float areais=squr*3.14;
	return areais;
}
float circumfrence(int ar)
{
	
	float circum=2*ar*3.14;
	return circum;
}
int main()
{
	int r=3;
	cout<<area(r)<<endl;
	cout<<circumfrence(r)<<endl;
	return 0;
}
