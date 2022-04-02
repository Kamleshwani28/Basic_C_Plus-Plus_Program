// Swapping Numbers using Two variables

#include <iostream.h>
#include <conio.h>
void main()
{
    int a, b;
    clrscr();
    cout << "\nEnter the value of A ::";
    cin >> a;
    cout << "\nEnter the value of B ::";
    cin >> b;
    cout << "\nBefore Swapping";
    cout << a << b;
    a = b + a;
    b = a - b;
    a = a - b;
    cout << "\n\nAfter Swapping";
    cout << a << b;
    getch();
}
