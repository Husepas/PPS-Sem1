#include<iostream>
using namespace std;
int main()
{
    int n;char ch='A';
    cout<<"Enter number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)

        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
       ch='A';
    }
    for(int i=n;i>=1;i--)
    {
        ch='A'+i-1;
        for(int j=i;j>=1;j--)
        {
            cout<<ch;
            ch=ch-1;
        }
        cout<<endl;

    }
}
