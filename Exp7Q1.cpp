#include<iostream>
using namespace std;
void leap(int year);
int main()
{
	int year;
	cout<<"Enter year ";
	cin>>year;
	leap(year);

}
void leap(int year)
{
	if((year%400==0)||(year%4==0)&&(year%100!=0))
	{
		cout<<"Leap year";
	}
	else
	{
		cout<<"Not a leap year";
	}
}
