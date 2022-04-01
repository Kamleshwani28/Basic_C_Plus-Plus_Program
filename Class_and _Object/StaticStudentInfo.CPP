#include <iostream.h>
#include <conio.h>
class Student
{
  private:
    char name[20];
    int rollno, i;
    float fees;
    static float total;

  public:
    void setStudent()
    {
        cout << "\nEnter the Name :";
        cin >> name;
        cout << "\nEnter the Roll no :";
        cin >> rollno;
        cout << "\nEnter the Fees :";
        cin >> fees;
        total = total + fees;
    }
    void getStudent()
    {
        cout << "\nStudent Name :" << name;
        cout << "\nStudent Roll no :" << rollno;
        cout << "\nStudent Fees :" << fees << endl;
        for (i = 0; i <= 25; i++)
        {
            cout << "-";
        }
    }
    static void getTotal()
    {
        cout << "\n\nTotal Fees ::" << total;
    }
};
float Student::total = 0;
void main()
{
    Student S1, S2, S3;
    clrscr();
    S1.setStudent();
    S1.getStudent();
    S2.setStudent();
    S2.getStudent();
    S3.setStudent();
    S3.getStudent();
    Student :: getTotal();
    getch();
}