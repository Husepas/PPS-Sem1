#include<iostream>
using namespace std;

int main()
{
    int r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
    cout<<"Enter 2 rows: ";
    cin>>r1>>r2;
    cout<<"Enter 2 columns: ";
    cin>>c1>>c2;
    if(c1!=r2)
    {
        cout<<("\nC1 should be equal to R2");
        return 1;
    }
    cout<<"Enter elements of matrix a: ";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of matrix b: ";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}
