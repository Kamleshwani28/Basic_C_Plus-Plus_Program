// Program for Convert String to Upper Case

#include <iostream.h>
#include <conio.h>
void main()
{
    char s1[20], s2[20];
    int i = 0;
    clrscr();
    cout<<"\nEnter a string :";
    gets(s1);
    while (s1[i] != '\0')
    {
        if (s1[i] >= 97 && s1[i] <= 122)
        {
            s2[i] = s1[i] - 32;
        }
        else
        {
            s2[i] = s1[i];
        }
        i++;
    }
    s2[i] = '\0';
    cout<<"\n\nUpper case string ::"<<s2;
    getch();
}
