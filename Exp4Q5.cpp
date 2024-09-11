#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n,n1,n2,sum=0,rem,cnt=0;
    cout<<"Enter number to check Armstrong number";
    cin>>n;
    n2=n;
    n1=n;
    while(n2>0)
    {
        cnt++;
        n2=n2/10;
    }
    cout<<"\nNumber of digits is "<<cnt;
    for(int i=0;i<=cnt;i++)
    {
        rem=n%10;
        sum=sum+pow(rem,cnt);
        n=n/10;
    }
    if(n1==sum)
        cout<<"\nArmstrong number";
    else
        cout<<"\nNot Armstrong number";
}
