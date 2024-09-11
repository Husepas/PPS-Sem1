#include<iostream>
using namespace std;

int main()
{
    int n,a[10];

    cout<<"Enter no of elements: ";
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Odd :"<<endl;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2!=0)
            cout<<a[i]<<endl;
    }
    cout<<"Even :"<<endl;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
            cout<<a[i]<<endl;
    }
}
