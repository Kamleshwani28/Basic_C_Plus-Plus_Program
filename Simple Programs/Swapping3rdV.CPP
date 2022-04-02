// Swapping Numbers Using Three Variables

#include <iostream.h>
#include <conio.h>
void main()
{
    int a, b, c;
    clrscr();
    cout << "\nEnter the value of A ::";
    cin >> a;
    cout << "\nEnter the value of B ::";
    cin >> b;
    cout << "\nBefore Swapping\n";
    cout << a << b;
    c = a;
    a = b;
    b = c;
    cout << "\n\nAfter Swapping\n";
    cout << a << b;
    getch();
}
