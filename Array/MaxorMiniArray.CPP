// Program to find Maximum and Minimum of Array elements.

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int i, j, arr[5], min, max;
    cout << "\nEnter Five Integer Numbers ::";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << "\n Minimum value is ::" << min;
    cout << "\n Maximum value is ::" << max;
    getch();
}
