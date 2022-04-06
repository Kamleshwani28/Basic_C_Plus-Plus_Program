// Program for Convert Matrix into Transpose matrix

#include <siostream.h>
#include <conio.h>
void main()
{
    int n, a[10][10], j, i;
    clrscr();
    cout<<"\nEnter Number ::";
    cin>>n;
    cout<<"\nEnter "<<n<<"*"<<n<<"matrix ::\n "<<n<<n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>"\t"<<a[i][j];
        }
    }
    for (i = 0; i < 20; i++)
    {
        cout<<"_"<< i;
    }
    cout<<"\n\nOriginal matrix =\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    for (i = 0; i < 20; i++)
    {
        cout<<"_"<<i;
    }
    coput<<"\n\nTraspose matrix :\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<"\t"<<a[j][i];
        }
        cout<<"\n";
    }
    getch();
}