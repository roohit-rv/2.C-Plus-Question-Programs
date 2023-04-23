/*- There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".*/
#include<iostream>
using namespace std;
int main()
{
  int total, boys, girls;
  boys=17;
  total=(45*80)/100;
  girls=total-boys;
  cout<<"total "<<girls<<" number of girls recieved grade A"<<endl;
  
	
	return 0;
}
