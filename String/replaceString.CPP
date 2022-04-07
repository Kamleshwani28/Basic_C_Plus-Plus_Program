// Program for Replacing Charater in String

#include <iostream.h>
#include <conio.h>
void main()
{
    int len = 0, i;
    char s[40], c, r;
    clrscr();
    cout<<"Enter original string ::";
    gets(s);
    while (s[len] != '\0')
        len++;
    fflush(stdin);
    cout<<"\nEnter character to replace:";
    cin>>c;
    fflush(stdin);
    cout<<"\nEnter new character ::";
    cin>>r;
    for (i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            s[i] = r;
        }
    }
    puts(s);
    getch();
}