#include<iostream>
using namespace std;
void large(float a,float b,float c);
int main()
{
	float a,b,c;
	cout<<"Enter three numbers ";
	cin>>a>>b>>c;
	large(a,b,c);
}
void large(float a,float b,float c)
{
	if(a>b&&a>c)
		printf("Largest is %f",a);
	else if(b>a&&b>c)
		printf("Largest is %f",b);
	else if(c>a&&c>b)
		printf("Largest is %f",c);
	else
		cout<<"Two or more numbers are equal";
}
