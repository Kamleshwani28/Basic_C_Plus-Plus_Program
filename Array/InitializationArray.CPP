// Program to explain Initialization of an Array
#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int num[10] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << "\n" << i + 1 << " ::: " << num[i] << endl;
    }

    getch();
}
