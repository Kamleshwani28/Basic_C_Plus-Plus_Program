//  Program for Billing System or Menu Card  

#include <iostream.h>
#include <conio.h>
void main()
{
    char ch;
    int ono, q, b;
    clrscr();
    cout<<"\n***MENU***";
    cout<<"\n1 IceCream";
    cout<<"\n2 Cone ";
    cout<<"\n3 Pestrices";
    cout<<"\n4 Exit";
    cout<<"\nEnter Your choise ::";
    cin>>ono;
    switch (ono)
    {
    case 1:
              cout<<"\nYour order is Icecream with price ::25/- ";
              cout<<"\nEnter Quntitiy of Icecream ::";
              cin>>q;
              b = 25 * q;
              cout<<"\nTotal Bill ::"<<b;
              break;
    case 2:
              cout<<"\nYour order is Cone with price ::35/- ";
              cout<<"\nEnter Quntitiy of Cone ::";
              cin>>q;
              b = 35 * q;
              cout<<"\nTotal Bill ::"<<b;
              break;
    case 3:
              cout<<"\nYour order is Pestrices with Price ::45/-";
              cout<<"\nEnter Quntitiy ::";
              cin>>q;
              b = 45 * q;
              cout<<"\nTotal Bill ::"<<b;
              break;
    case 4:
              cout<<"\n\nBye!Bye!";
              break;
    }
    getch();
}
