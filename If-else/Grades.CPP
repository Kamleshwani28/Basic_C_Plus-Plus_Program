// Program for Student Grade

#include <iostream.h>
#include <conio.h>
void main()
{
    int marks;
    clrscr();
    cout<<"\nEnter marks to Know your Grade ::";
    cin>>marks;
    if (marks < 35)
    {
        cout<<"\nGrade 'F'";
    }
    else if (marks >= 35 && marks <= 40)
    {
        cout<<"\nGrade 'D'";
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout<<"\nGrade 'C";
    }
    else if (marks >= 50 && marks <= 60)
    {
        cout<<"\nGrade 'B'";
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout<<\nGrade 'B+'";
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout<<"\nGrade 'A'";
    }
    else
    {
        cout<<"\nGrade 'A+'";
    }
    getch();
}
