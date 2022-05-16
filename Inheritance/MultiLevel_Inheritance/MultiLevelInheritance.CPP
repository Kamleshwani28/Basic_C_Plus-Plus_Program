//Program for MultiLevel Inheritance

#include <iostream.h>
#include <conio.h>
class top
{
  public:
    int a;
    void getdata()
    {
        cout << "Enter first Number ::";
        cin >> a;
    }
    void putdata()
    {
        cout << "\nFirst Number Is ::\t" << a;
    }
};
//First level inheritance
class middle : public top
{
  public:
    int b;
    void square()
    {
        getdata();
        b = a * a;
        cout << "\nSquare is :: " << b;
    }
};
//Second level inheritance
class bottom : public middle // class bottom is derived_2
{
  public:
    int c;
    void cube()
    {
        square();
        c = b * a;
        cout << "\n\nCube is :: " << c;
    }
};
int main()
{
    clrscr();
    bottom b1;
    b1.cube();
    getch();
}
