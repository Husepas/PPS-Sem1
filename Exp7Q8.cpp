#include <iostream>
#include <cstring>
using namespace std;
int stringLength(char str[])
{
    return strlen(str);
}
int stringCompare(char str1[],char str2[])
{
    return strcmp(str1, str2);
}
void stringCopy(char copy[],char str1[])
{
    strcpy(copy,str1);
}
void stringConcat(char dest[],char src[])
{
    strcat(dest, src);
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
