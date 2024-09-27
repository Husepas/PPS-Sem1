#include<iostream>
using namespace std;
int Search_Element(int a[10],int n,int y);

int main()
{
    int n,a[10],y;

    cout<<"Enter number of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to search ";
    cin>>y;
    int x=Search_Element(a,n,y);
    if (x==1)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
}

int Search_Element(int a[10],int n,int y)
{
    for (int i=0;i<n;i++)
    {
           if(a[i]==y)
           {
                  return 1;
           }
    }
}
