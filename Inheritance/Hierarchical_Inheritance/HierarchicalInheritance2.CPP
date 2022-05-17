// Program to explain Hierarchical Inheritance

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
class C : public A
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

    B b1;
    C c1;
    b1.getX();
    b1.getY();
    c1.getX();
    c1.getZ();
    b1.showX();
    b1.showY();
    c1.showX();
    c1.showZ();

    getch();
}