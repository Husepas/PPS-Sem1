#include<iostream>
using namespace std;
int main()
{
    int f1=0,f2=1,n,f3;
    cout<<"Enter number of terms ";
    cin>>n;
    cout<<"\nFibronaci Series is:-\n"<<f1<<" "<<f2;
    for(int i=1;i<=n-2;i++)
    {
        f3=f1+f2;
        cout<<" "<<f3;
        f1=f2;
        f2=f3;
    }
    return 0;
}
