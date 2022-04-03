// Program to explain Call By Reference.

#include <iostream.h>
#include <conio.h>
void cube(int &);
void main()
{
    int a = 10;
    clrscr();
    cube(a);
    cout << "\n a = " << a << endl;
    getch();
}
void cube(int &x)
{
    x = x * x * x;
    cout << "\n x = " << x << endl;
}
