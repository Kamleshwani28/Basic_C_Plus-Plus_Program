//Program for Hybrid Inheritance

#include <iostream.h>
#include <conio.h>
int a, b, c, d, e;
class A
{
  public:
    void getab()
    {
        cout << "Enter A:";
        cin >> a;
        cout << "Enter B:";
        cin >> b;
    }
};
class B : public A
{
  public:
    void getc()
    {
        cout << "Enter C:";
        cin >> c;
    }
};
class C
{
  public:
    void getd()
    {
        cout << "Enter D:";
        cin >> d;
    }
};
class D : public B, public C
{
  public:
    void result()
    {
        getab();
        getc();
        getd();
        e = a + b + c + d;
        cout << "\n Addition is :" << e;
    }
};
void main()
{
    clrscr();
    D d1;
    d1.result();
    getch();
}