#include<iostream>
using namespace std;

int main()
{
    int m,n,a[10][10];
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

    int sum=0;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            sum=sum+ a[i][j];
        }
    }

    cout<<"Sum of elements is "<<sum<<endl;
}

