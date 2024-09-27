#include<iostream>
using namespace std;

int fibro(int n)
{
       if(n==0||n==1)
              return n;
       return fibro(n-1)+fibro(n-2);
}
int main()
{
       cout<<"Enter no of elements ";
       int n,ans;
       cin>>n;
       for(int i=0;i<n;i++)
       {
              ans=fibro(i);
              cout<<ans<<" ";
       }
}
