#include<iostream>
using namespace std;

int main()
{
    int n,a[10];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of array 1 ";
    for (int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter elements of array 2 ";
    for (int j=0; j<n; j++)
        cin>>a[j];
    cout<<"Intersections are :-\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]==a[j])
                cout<<a[i]<<" ";
        }
    }
}
