#include <iostream.h>
#include <conio.h>
void main()
{
    int english, marathi, hindi, physics, chemistry;
    float p;
    int m;
    clrscr();
    cout << "\n Marks of English ::";
    cin >> english;
    cout << "\n Marks of Marathi ::";
    cin >> marathi;
    cout << "\n Marks of Hindi ::";
    cin >> hindi;
    cout << "\n Marks of Physics ::";
    cin >> physics;
    cout << "\n Marks of Chemistry ::";
    cin >> chemistry;
    m = (english + marathi + hindi + physics + chemistry);
    cout << "\n Total Marks Often By :" << m;
    p = m / 5;
    cout << "\n Total Persentage :" << p;
    getch();
}