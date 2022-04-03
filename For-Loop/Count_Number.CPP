// Program to Count Number of Digits in given Number

#include <iostream.h>
#include <conio.h>
void main()
{
    long int n, c;
    Clrscr();
    cout << "\n Enter a Positive number ::";
    cin >> n;
    c = 0;
    while (n != 0)
    {
        n = n / 10;
        c = c + 1;
    }
    cout << "\n The Number of digits is ::" << c;
    getch();
}
