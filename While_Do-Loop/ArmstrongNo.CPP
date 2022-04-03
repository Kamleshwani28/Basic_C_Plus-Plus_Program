// Program for Check Number is Armstrong or Not 

#include <iostream.h>
#include <conio.h>
void main()
{
    int n, s, add = 0, t;
    clrscr();
    cout<<"\nEnter any Number ::";
    cin>>n;
    t = n;
    while (n > 0)
    {
        s = n % 10;
        add = add + (s * s * s);
        n = n / 10;
    }
    if (add == t)
    {
        cout<<"\nNumber is Armstrong";
    }
    else
    {
        cout<<"\nNumber is Not Armstrong";
    }
    getch();
}
