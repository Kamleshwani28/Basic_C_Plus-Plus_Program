// Program to explain Simple Class and Object

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
        cout << "\nEnter Radius :";
        cin >> radius;
    }
    void area()
    {
        float ar;
        ar = PI * radius * radius;
        cout << "\n\nArea of Circle :: " << ar;
    }
    void showRadius()
    {
        cout << "\nRadius : " << radius;
    }
};
void main()
{
    clrscr();
    Circle c1;
    c1.getRadius();
    c1.showRadius();
    c1.area();
    getch();
}
