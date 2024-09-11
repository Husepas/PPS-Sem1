#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n,n1,n2,rev=0,rem,cnt=0;
    cin>>n;
    n2=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n2)
        cout<<"\nIt is a palindrome";
    else
        cout<<"\nNot a palindrome";

}
