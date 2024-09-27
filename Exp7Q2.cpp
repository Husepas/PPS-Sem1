#include<iostream>
using namespace std;
int power(int n,int p);
int main()
{
	int number,index;
	cout<<"Enter number and index ";
	cin>>number>>index;
	int result=power(number,index);
	printf("Answer is %i",result);
}
int power(int n,int p)
{
	int ans=1;
	for(int i=0;i<p;i++)
	{
		ans=ans*n;
	}
	return ans;
}
