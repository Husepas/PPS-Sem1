#include<iostream>
using namespace std;

int main()
{
    int n,a[10],b[10];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of array";

    for (int i=0; i<n; i++)
         cin>>a[i];

    for (int i=0,j=n-1; i<n;i++,j--)
        b[j]=a[i];

    cout<<"Elements of array reversed are ";
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}
