// Program to Simple Function

#include <iostream.h>
#include <conio.h>
void show(int x);       // Function Declaration/Prototype
void main()
{
    clrscr();
    int a = 10;
    show(a);       // Calling of Function
    getch();
}
void show(int x)       // Function Definition
{
    cout << "\n x = " << x;
}
