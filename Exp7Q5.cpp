#include<iostream>
using namespace std;

int sum(int n);
int rev(int n);
int cnt(int n);
int main()
{
	int n,c,x;
	cout<<"Enter 1 to calculate sum of digits, 2 to find reverse of number or 3 to count number of digits ";
	cin>>c;
	cout<<"Enter a number ";
	cin>>n;

	switch(c)
	{
	case 1:
		x=sum(n);
		cout<<"Sum of digits is "<<x;
		break;
	case 2:
		x=rev(n);
		cout<<"Reverse of digits is "<<x;
		break;
	case 3:
		x=cnt(n);
		cout<<"Count of digits is "<<x;
		break;
	default:
		cout<<"Invalid Input";
	}

}

int sum(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int rev(int n)
{
	int rev=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev ;
}

int cnt(int n)
{
	int cn=0;
	while(n>0)
	{
		cn++;
		n=n/10;
	}
	return cn;
}


