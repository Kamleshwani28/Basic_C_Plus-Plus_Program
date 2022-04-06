#include <iostream.h>
#include <conio.h>
void main()
{
    int a[5], b[5], c[5], i;
    cout<<"\nEnter First array ::";
    for (i = 0; i < 5; i++)
        cin>>a[i];
    cout<<"\nEnter Second array ::";
    for (i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    cout<<"\nArrays before swapping ::-";
    cout<<"\n\nFirst array =";
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\nSecond array =";
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<b[i];
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    cout<<"\n\nArrays after swapping ::-";
    cout<<"\n\nFirst array =";
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<a[ i];
    }
    cout<<"\nSecond array =";
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<b[i];
    }
}