// Program for Count Upper or Lower Case Letters

#include <iostream.h>
#include <conio.h>
void main()
{
    int upper = 0, lower = 0, i = 0;
    char ch[50];
    cout<<"\nEnter a String :";
    gets(ch);
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            lower++;
        i++;
    }
    cout<<"\nUppercase Letters are :"<<upper;
    cout<<"\n\nLowercase Letters are :"<<lower;
}