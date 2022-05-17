// Program to explain Multi-level Inheritance

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
class C : public B
{
    int z;

  public:
    void getZ()
    {
        cout << "Enter z : ";
        cin >> z;
    }
    void showZ()
    {
        cout << "\n z : " << z;
    }
};
void main()
{
    clrscr();

    C c1;
    c1.getX();
    c1.getY();
    c1.getZ();
    c1.showX();
    c1.showY();
    c1.showZ();

    getch();
}