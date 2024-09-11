#include<iostream>
using namespace std;
int main()
{
    int n,a[10];
    cout<<"Enter No. of elements ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        a[i]*=5;
    cout<<"Result is \n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
