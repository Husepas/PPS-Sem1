#include <iostream>
#include <cstring>
using namespace std;
int stringLength(char str1[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    return i;
}
void stringCopy(char str1[],char str2[])
{
    int i=0;
    while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}
int stringCompare(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        if(str2[i]!=str1[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}
void stringReverse(char str[],char reverse[])
{
    int i;
    int l = stringLength(str);
    int j=0;
    for(i=0; i<=l-1;i++)
        {
        reverse[j]=str[l-1-i];
        j++;
        }
        reverse[j]='\0';
}
void stringConcat(char str1[],char str2[])
{
    int n=stringLength(str1);
    int i=0;
    while(str2[i]!='\0')
    {
        str1[n]=str2[i];
        i++;
        n++;
    }
    str1[n]='\0';
}
int main()
{
    char str1[100], str2[100], result[200],reverse[100],copy[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    cout << "Length of first string: " << stringLength(str1) <<endl;
    if (stringCompare(str1, str2) == 0)
        {
        cout << "The strings are equal." <<endl;
        }
    else
        {
        cout << "The strings are not equal." <<endl;
        }
    stringCopy(copy, str1);
    cout << "Copied string: " <<copy <<endl;
    stringConcat(str1, str2);
    cout << "Concatenated string: " << str1 <<endl;
    stringReverse(str1,reverse);
    cout << "Reversed first string: " << reverse <<endl;

    return 0;
}
