#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem;
    cout<<"Enter number";
    cin>>n;
    do{
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    while(n>0);
    cout<<"\nSum is "<<sum;
}
