#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number ";
    int n;
    char ch='A',c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                cout <<ch;
                ch++;
            }
            else
            {
                c=tolower(ch);
                cout<<c;
                ch++;
            }

        }
        cout<<endl;

    }
}
