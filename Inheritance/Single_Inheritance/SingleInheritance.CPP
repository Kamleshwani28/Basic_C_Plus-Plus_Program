//Program to Single Inheritance

#include <iostream.h>
#include <conio.h>
class Base
{
  protected:
    int val;

  public:
    void setData(int v)
    {
        val = v;
    }
};
class Derived : public Base
{
  public:
    void cube()
    {
        cout << "Cube of " << val << " is " << val * val * val;
    }
};
int main()
{
    Derived d;
    clrscr();
    d.setData(10);
    d.cube();
    getch();
}
