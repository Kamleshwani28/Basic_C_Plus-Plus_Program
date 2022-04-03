// Program for print any five Numbers  

#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	cout<<"\nEnter any 5 NO :";
	for (i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe 5 No Are :";
	for(i=0;i<=4;i++)
	{
		cout<< a [ i ];
	}
	getch();
}