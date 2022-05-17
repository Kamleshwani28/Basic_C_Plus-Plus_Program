// Program to explain Single Inheritance

#include <iostream.h>
#include <conio.h>
class A
{
    int x;

  public:
    void getX()
    {
        cout << "Enter x : ";
        cin >> x;
    }
    void showX()
    {
        cout << "\n x : " << x;
    }
};
class B : public A
{
    int y;

  public:
    void getY()
    {
        cout << "Enter y : ";
        cin >> y;
    }
    void showY()
    {
        cout << "\n y : " << y;
    }
};
void main()
{
    clrscr();

    B b1;
    b1.getX();
    b1.getY();
    b1.showX();
    b1.showY();

    getch();
}