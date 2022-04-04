// Program to explain that a Pointer Variable can point different variable at different point of time

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a = 10, b = 20, c = 30;
    int *p;
    p = &a;
    cout << "\n *p = " << *p;
    p = &b;
    cout << "\n *p = " << *p;
    p = &c;
    cout << "\n *p = " << *p;
    getch();
}
