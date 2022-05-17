// Program to explain Overloading of
// Unary Minus ( - ) Operator

#include <iostream.h>
#include <conio.h>
class Counter
{
    unsigned int count;

  public:
    Counter()
    {
        count = 0;
    }

    Counter(int c)
    {
        count = c;
    }

    int getCount()
    {
        return count;
    }
    void operator-() // prefix
    {
        count = -count;
    }
};
void main()
{
    clrscr();
    Counter c1(10), c2(20);
    cout << "\n c1 : " << c1.getCount();
    cout << "\n c2 : " << c2.getCount();

    -c2;

    cout << "\n c1 : " << c1.getCount();
    cout << "\n -c2 : " << c2.getCount();
    getch();
}
