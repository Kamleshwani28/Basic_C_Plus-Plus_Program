// Program to print ASCII value of given Character.

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    char ch;
    cout << "\n Enter any character :";
    cin >> ch;
    cout << "\n The ASCII value of \'" << ch << "\' is :: " << int(ch);
    getch();
}
