// Program for Check Age to Driving a Car

#include <iostream.h>
#include <conio.h>
struct Gender
{
    char gender, ch;
    int age;
};
struct Gender S;
void setGender();
void getGender();
void main()
{
    clrscr();
    setGender();
    getGender();
    getch();
}
void setGender()
{
    cout << "\n Enter a Gender(M/F):";
    cin >> S.gender;
    cout << "\n Enter a Age:";
    cin >> S.age;
}
void getGender()
{
    if (S.gender == 'm')
    {
        if (S.age > 18)
        {
            cout << "\n Male Driver can Allowed";
        }
        else
        {
            cout << "\n Male Driver can Not Allowed";
        }
    }
    else
    {
        if (S.age > 22)
        {
            cout << "\n Female driver Can Allowed";
        }
        else
        {
            cout << "\n Female Driver Cna Not Allowed";
        }
    }
}
