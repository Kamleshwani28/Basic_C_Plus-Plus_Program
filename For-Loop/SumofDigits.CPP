// Program to find Sum of Digits of given Number

#include <iostream.h>
#include <conio.h>
void main()
{
    int n, r, sum;
    clrscr();
    cout << "\n Enter any Number ::";
    cin >> n;
    sum = 0;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "\nThe Sum of the Digits is ::" << sum;
    getch();
}
