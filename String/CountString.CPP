// Program for Count Total Word in String 

#include <iostream.h>
#include <conio.h>
void main()
{
    int len = 0, c = 1;
    char s[40];
    clrscr();
    cout<<"\nEnter a string :";
    gets(s);
    while (s[len] != '\0')
    {
        if (s[len] == ' ')
            c++;
        len++;
    }
    cout<<"\nTotal words ::"<<c;
    getch();
}