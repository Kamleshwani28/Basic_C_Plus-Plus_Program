// Program for Check Number is Prime or Not

#include <iostream.h>
#include <conio.h>
void Prime();
void main()
{
    clrscr();
    Prime();
    getch();
}
void Prime()
{
    int n, i, flag = 1;
    clrscr();
    cout<<"\nEnter The No :";
    cin>>n;
    if (n == 1)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i <= n - i; i++)
        {
            if (n % 2 == 1)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout<<"\nNo is Prime";
    }
    else
    {
        cout<<"\nNo is Not Prime";
    }
}
