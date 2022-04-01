#include <iostream.h>
#include <conio.h>
void main()
{
    int emply, wage, workingtime, dmonth;
    int twage, tworkingtime, tdmonth;
    float pfpersentage;
    clrscr();
    cout << "\nEnter Employee I'D::";
    cin >> emply;
    cout << "\nEnter Wage Per Hours::";
    cin >> wage;
    cout << "\nEnter Working Hours Per Day(4/8)::";
    cin >> workingtime;
    cout << "\nEnter Day in Month::";
    cin >> dmonth;

    twage = wage * workingtime;

    cout << "\n\nTotal Wage Per Hours :" << twage;
    tdmonth = twage * dmonth;

    cout << "\n\nTotal Wage Per Month :" << tdmonth;
    cout << "\n\nEnter the PF Persentage::";
    cin >> pfpersentage;

    pfpersentage = (pfpersentage * tdmonth) / 100;
    twage = tdmonth - pfpersentage;

    cout << "\nTotal PF Amount :" << pfpersentage;
    cout << "\n\nTotal Salary in Hand :" << twage;
    getch();
}