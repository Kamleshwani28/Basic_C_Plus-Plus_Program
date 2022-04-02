// Program for Find to Who Can Drive Car in Which Age
#include<iostream.h>
#include<conio.h>
void main()
{
       int age;
       clrscr();
       cout<<"\nEnter Your Age:";
       cin>>age;
       if(age>=18)
       {
              cout<<"\nYou Can Drive a Car";     
       }
       else
       {
              cout<<"\nYou Can't Drive a Car";     
       }
       getch();     
}