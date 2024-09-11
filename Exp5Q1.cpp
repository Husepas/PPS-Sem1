#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
