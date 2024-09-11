#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number ";
    int n,n1,fact=1,sum=0,rem;
    cin>>n;
    n1=n;
    while(n!=0)
    {
        fact=1;
        rem=n%10;
        for(int i=1;i<=rem;i++)
            fact=fact*i;
        sum=sum+fact;
        n=n/10;
    }
    if(sum==n1)
        cout<<"\nStrong number";
    else
        cout<<"\nNot a Strong number";
}

