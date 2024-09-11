#include<iostream>
using namespace std;
int main()
{
    int n,temp,a[10],b[10];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of array";
    for (int i=0; i<n; i++)
        cin>>a[i];
    temp=a[n-1];
    a[n-1]=a[0];
    a[0]=temp;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
