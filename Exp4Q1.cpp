#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cout<<"Enter number ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    cout<<"\nValue of sum of squares is "<<sum;
    return 0;
}
