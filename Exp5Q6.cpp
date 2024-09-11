#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number ";
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
            cout<<j;
        cout<<endl;
    }

}
