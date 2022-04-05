// Program for Comparing Two Numbers

#include <iostream.h>
#include <conio.h>
struct Compression
{
    int a, b;
    int c, d;
};
struct Compression S;
void setCompression();
void getCompression();
void main()
{
    clrscr();
    setCompression();
    getCompression();
    getch();
}
void setCompression()
{
    cout<<"\nEnter Value of A :";
    cin>>S.a;
    cout<<"\nEnter Value of B :";
    cin>>S.b;
    if (S.a > S.b)
    {
        cout<<"\nA is Big";
    }
    else
    {
        cout<<"\nB is Big";
    }
}
void getCompression()
{
    cout<<"\n\nEnter Value of C :";
    cin>>S.c;
    cout<<"\nEnter Value of D :";
    cin>>S.d;
    if (S.c > S.d)
    {
        cout<<"\nC is Big";
    }
    else
    {
        cout<<"\nD is Big";
    }
}