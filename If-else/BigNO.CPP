// Program for Find Which Number is Big 

#include <iostream.h>
#include <conio.h>
void main()
{
    int a, b;
    clrscr();
    cout << "\nEnter A Number :";
    cin >> a;
    cout << "\nEnter B Number :";
    cin >> b;
    if (a > b)
    {
        cout << "\nA is Big";
    }
    else if (a <= b)
    {
        cout << "\nBoth Are Big";
    }
    else
    {
        cout << "\nB is Big";
    }
    getch();
}