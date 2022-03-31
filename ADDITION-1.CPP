#include <iostream.h>
#include <conio.h>
void main()
{
    int a, b, c, s, m;
    float d;
    clrscr();
    cout << "\nEnter Two number::";
    cin >> a >> b;
    c = a + b;
    cout << "Total Addtion=\n"<< c;
    cout << "\nEnter Two Number::";
    cin >> a >> b;
    s = a - b;
    cout << "\nTotal Subtraction=" << s;
    cout << "\nEnter Two Number::";
    cin >> a >> b;
    m = a * b;
    cout << "TotalMultiplicti=\n"<< m;
    cout << "\nEnter Two Number::";
    cin >> a >> b;
    d = a / b;
    cout << "Total Diviction=\n"<< d;
    getch();
}
