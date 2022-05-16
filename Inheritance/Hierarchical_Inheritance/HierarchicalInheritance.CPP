//Program for Hierarchical Inheritance

#include <iostream.h>
#include <conio.h>
class A //Base Class
{
  public:
    int a, b;
    void getnumber()
    {
        cout << "\nEnter Number ::";
        cin >> a;
    }
};
class B : public A //Derived Class 1
{
  public:
    void square()
    {
        getnumber();
        cout << "\nSquare of the number ::" << (a * a);
        cout << "\n--------------------------------";
    }
};
class C : public A //Derived Class 2
{
  public:
    void cube()
    {
        getnumber();
        cout << "\nCube of the number ::" << (a * a * a);
        cout << "\n-------------------------------";
    }
};
int main()
{
    clrscr();
    B b1;
    b1.square();
    C c1;
    c1.cube();
    getch();
}