#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"Enter 2 numbers ";
    cin>>m>>n;
    if(m>n)
    {
        cout<<"n should be more than n";
        return 0;
    }
    for(int i=m+1;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"\nSum is "<<sum;
}
