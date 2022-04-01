#include <iostream.h>
#include <conio.h>
class Student
{
  private:
    char name[20];
    int rollno;
    float fees;

  public:
    void setStudent()
    {
        cout << "\nEnter the Name ::";
        cin >> name;
        cout << "\nEnter the Roll no :";
        cin >> rollno;
        cout << "\nEnter the Fees :";
        cin >> fees;
    }
    void getStudent()
    {
        cout << "\nStudent Name :" << name;
        cout << "\nStudent Roll no :" << rollno;
        cout << "\nStudent Fees :" << fees;
    }
};
void main()
{
    Student S;
    clrscr();
    S.setStudent();
    S.getStudent();

    getch();
}