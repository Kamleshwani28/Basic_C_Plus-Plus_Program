//Program to explain Call By Address/Pointer

#include <iostream.h>
#include <conio.h>
void cube(int *);
void main()
{
    int a = 10;
    clrscr();
    cube(&a);
    cout << "\n a = " << a << endl;
    getch();
}
void cube(int *pa)
{
    *pa = (*pa) * (*pa) * (*pa);
    cout << "\n *pa = " << *pa << endl;
}
