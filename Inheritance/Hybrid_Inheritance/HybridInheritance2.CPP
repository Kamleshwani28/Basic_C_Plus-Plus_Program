// Program to explain Hybrid Inheritance

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
class D : public B, public C
{
    int w;

  public:
    void getW()
    {
        cout << "Enter w : ";
        cin >> w;
    }

    void showW()
    {
        cout << "\n w : " << w;
    }
};
void main()
{
    clrscr();

    D d1;
    // d1.getX();	// Error: ambigous
    d1.B::getX();
    d1.C::getX();
    d1.getY();
    d1.getZ();
    d1.getW();
    // d1.showX();  // Error: ambigous
    d1.B::showX();
    d1.C::showX();
    d1.showY();
    d1.showZ();
    d1.showW();

    getch();
}