// Program to explain Overloading of
// Binary Plus (+) Operator

#include <conio.h>
#include <iostream.h>
class data
{
  private:
    int d;

  public:
    data()
    {
        d = 0;
    }
    data(int dt)
    {
        d = dt;
    }
    void show()
    {
        cout << d << endl;
    }
    data operator+(data obj)
    {
        data temp;
        temp.d = obj.d + d;
        return temp;
    }
};
void main()
{
    clrscr();
    data d1(2), d2(10), d3;
    d3 = d1 + d2;
    d3.show();
    getch();
}
