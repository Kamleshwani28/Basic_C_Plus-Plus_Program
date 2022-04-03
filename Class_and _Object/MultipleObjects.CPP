// Program to create Multiple Objects of Circle class

#include <iostream.h>
#include <conio.h>
#define PI 3.14
class Circle
{
  private:
    float radius;

  public:
    void getRadius()
    {
        cout << "Enter Radius ::: ";
        cin >> radius;
    }
    void area()
    {
        float ar;
        ar = PI * radius * radius;
        cout << "\n Area of Circle : " << ar;
    }
    void showRadius()
    {
        cout << "\n Radius : " << radius;
    }
};
void main()
{
    Circle c1, c2;
    clrscr();
    c1.getRadius();
    c2.getRadius();
    c1.showRadius();
    c1.area();
    c2.showRadius();
    c2.area();
    getch();
}