// Program for Employee Information
// using Default Constructor

#include <iostream.h>
#include <conio.h>
class Employee
{
  private:
    char name[10];
    int employeeID;
    float salary;

  public:
    void setEmployee()
    {
        cout << "\nEmployees Information ::" << endl;
        cout << "\nEnter Employees Name :";
        cin >> name;
        cout << "\nEnter Employees I'd :";
        cin >> employeeID;
        cout << "\nEnter Employees salary :";
        cin >> salary;
    }
    void getEmployee()
    {
        cout << "\nEmployees Name :" << name;
        cout << "\nEmployees I'd :" << employeeID;
        cout << "\nEmployees Salary :" << salary;
    }
    Employee()            //Default Constructor
    {
           employeeID=0;
           salary=0;     
    }
};
void main()
{
    Employee S;
    clrscr();
    S.setEmployee();
    S.getEmployee();
    getch();
}