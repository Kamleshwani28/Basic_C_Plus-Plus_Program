// Program to use Pointer Variable in Simple Volume of Cylinder example

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    float r, h, v;
    float *pr, *ph, *pv;
    const float PI = 3.14;
    pr = &r;
    ph = &h;
    pv = &v;
    cout << "\nEnter Radius & Height :";
    cin >> *pr >> *ph;
    *pv = PI * (*pr) * (*pr) * (*ph);
    cout << "\nVolume of Cylinder :: " << *pv;
    getch();
}
