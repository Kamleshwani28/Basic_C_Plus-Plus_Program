// Program to explain Simple Distance class

#include <iostream.h>
#include <conio.h>
class Distance
{
  private:
    int feet;
    float inches;

  public:
    void getDist()
    {
        cout << "\nEnter Feet :";
        cin >> feet;
        cout << "Enter Inches :";
        cin >> inches;
    }
    void showDist()
    {
        cout << "\n"
             << feet << "\'-" << inches << "\"";
    }
};
void main()
{
    clrscr();
    Distance d1, d2;
    d1.getDist();
    d2.getDist();
    d1.showDist();
    d2.showDist();
    getch();
}
