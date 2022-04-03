// Program to find Factorial of given Number

#include <iostream.h>
#include <conio.h>
long fact(long);
void main()
{
    long n, f;
    clrscr();
    cout << " Enter the Number : ";
    cin >> n;
    f = fact(n);
    cout << "\n  Factorial = " << f;
    getch();
}
long fact(long a)
{
    long f = 1;
    int i;
    for (i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}
