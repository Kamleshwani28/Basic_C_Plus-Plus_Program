// Program for Find Leap Year

#include <iostream.h>
#include <conio.h>
void main()
{
    int year;
    clrscr();
    cout<<"\nEter A Year::";
    cin>>year;
    if (year % 400 == 0)
    {
        cout<<"\n%d is a leap Year"<<year;
    }
    else if (year % 100 == 0)
    {
        cout<<"\n%d is a leap Year"<<year;
    }
    else if (year % 4 == 0)
    {
        cout<<"\n% is a leap Year"<<year;
    }
    else
    {
        cout<<"\n%d is a Not Leap Year"<<year;
    }
    getch();
}
