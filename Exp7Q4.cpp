#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int n;
	cout<<"Enter number ";
	cin>>n;
	int ans=fact(n);
	printf("Factorial is %i",ans);
}
int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}
