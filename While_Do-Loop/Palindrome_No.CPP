// Program for Check Number is Palindrome Or Not 

#include<iostream.h>
#include<conio.h>
void main()
{
       int n,r,d=100,sum=0,t=0;
       clrscr();
       cout<<"\nEnter any Number ::";
       cin>>n;
       t=n;
       while (n>0)
       {
              r=n%10;
              sum=sum+(r*d);
              d=d/10;
              n=n/10;            
       }
       if (t==sum)
       {
              cout<<"\nNumber is palindrome";
       }
       else
       {      
              cout<<"\nNumber is Not Palindrome";
       }
       getch();     
}
