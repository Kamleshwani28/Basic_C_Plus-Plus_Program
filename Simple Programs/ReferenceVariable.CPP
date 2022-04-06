// Program To Introduce Reference Variable

#include <iostream.h>
#include <conio.h>
int main()
{
    clrscr();
    int a;
    float b;
    int &x = a; // declare reference variables
    float &y = b;
    a = 23;
    cout << "\n Value of a : " << a << endl;
    cout << " Value of a reference : " << x << endl;
    b = 78.23;
    cout << "\n Value of b : " << b << endl;
    cout << " Value of a reference : " << y << endl;
    getch();
}
