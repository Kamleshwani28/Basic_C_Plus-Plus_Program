// Program to define Member Functions outside the class

#include <iostream.h>
#include <conio.h>
#define PI 3.14
class Circle
{
    float radius;

  public:
    void getRadius();
    float area();
    void showRadius();
};
void Circle ::getRadius()
{
    cout << "\nEnter Radius ::";
    cin >> radius;
}
float Circle ::area()
{
    float ar;
    ar = PI * radius * radius;
    return ar;
}
void Circle ::showRadius()
{
    cout << "\nRadius : " << radius;
}
void main()
{
    clrscr();
    Circle c1;
    c1.getRadius();
    c1.showRadius();
    float a = c1.area();
    cout << "\n\nArea of Circle : " << a;
    getch();
}
