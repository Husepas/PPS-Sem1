#include<iostream>
using namespace std;

int main()
{
    int n,a[10],b[10];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of array 1 ";
    for (int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter elements of array 2 ";
    for (int j=0; j<n; j++)
        cin>>b[j];
    cout<<"Intersections are :-\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]==b[j])
                cout<<a[i]<<" ";
        }
    }
}
