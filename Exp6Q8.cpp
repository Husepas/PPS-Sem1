#include<iostream>
using namespace std;

int main()
{
    int m,n,a[10][10],large=0;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;
    cout<<"Enter elements: ";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            large = (a[i][j]>large)? a[i][j] : large;
        }
    }
    cout<<"\nLargest element is "<<large<<endl;
}
