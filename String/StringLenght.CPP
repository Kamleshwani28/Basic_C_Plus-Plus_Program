// Program for Count String Length

#include <iostream.h>
#include <conio.h>
void main()
{
    int len = 0;
    char s[10];
    clrscr();
    cout<<"\nEnter a Word or Number :";
    gets(s);
    while (s[len] != '\0')
    {
        len++;
    }
    cout<<"\nString Length ::"<<len;
    getch();
}