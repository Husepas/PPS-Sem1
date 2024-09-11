#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number ";
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            x=j%2;
            cout<<x;
        }
        cout<<endl;
    }
}
