// Program for Sum of Frist Or Last Numbers

#include <iostream.h>
#include <conio.h>
void main()
{
    int n, s, sum = 0;
    clrscr();
    cout<<"\nEnter the Number ::";
    cin>>n;
    sum = n % 10;

    while (n > 0)
    {
        s = n % 10;
        n = n / 10;
    }
    sum = sum + s;
    cout<<"\nSum of First or Last Number ::"<<sum;
    getch();
}