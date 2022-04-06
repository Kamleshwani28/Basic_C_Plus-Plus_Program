// Program to explain String within Structure

#include <iostream.h>
#include <conio.h>
const int SIZE = 3;
struct Book
{
    char name[25];
    int page;
    int price;
};
void main()
{
    clrscr();
    int i;
    Book b1[SIZE];
    for (i = 0; i < SIZE; i++)
    {
        cout << "\nEnter Name of Book :";
        cin>>b1[i].name;
        cout << "\nEnter Number of Pages :";
        cin >> b1[i].page;
        cout << "\nEnter Price of Book :";
        cin >> b1[i].price;
    }
    for (i = 0; i < SIZE; i++)
    {
        cout << "\n\n Name of Book  : " << b1[i].name;
        cout << "\n Number of Page : " << b1[i].page;
        cout << "\n Price of Book  : " << b1[i].price;
        cout << "\n\n";
    }
    getch();
}
