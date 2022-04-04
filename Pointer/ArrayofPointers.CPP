// Program to explain Array of Pointers

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a = 10, b = 20, c = 30;
    int *p[3], *t;
    int i;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    cout << "\nValues are : ";
    for (i = 0; i < 3; i++)
    {
        cout << "  " << *p[i];
    }
    t = p[0];
    p[0] = p[2];
    p[2] = t;
    cout << "\nValues are : ";
    for (i = 0; i < 3; i++)
    {
        cout << "  " << *p[i];
    }
    getch();
}
