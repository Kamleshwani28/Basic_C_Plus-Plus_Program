// Program to Reverse an Array elements without using Second Array

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int arr[5];
    int i, j, t;
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter Number " << (i + 1) << "::";
        cin >> arr[i];
    }
    cout << "\nElements before reversing are ::";
    for (i = 0; i < 5; i++)
    {
        cout << "  " << arr[i];
    }

    for (i = 0, j = 5 - 1; i < 5 / 2; i++, j--)
    {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    cout << "\n\nElements after reversing are ::";
    for (i = 0; i < 5; i++)
    {
        cout << "  " << arr[i];
    }
    getch();
}
