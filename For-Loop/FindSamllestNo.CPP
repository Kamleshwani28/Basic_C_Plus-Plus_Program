// Program for Find Samllest Number in Array

#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5],i,small=0;
	clrscr();
	cout<<"\nEnter 5 Number :";
	for (i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe 5 Number Are :";
	for(i=0;i<=4;i++)
	{
		cout<<"\n"<<a[i];
	}
	small=a[0];
	for(i=1;i<=4;i++)
	{
		if (a[i]<small)
		{
			small=a[i];
		}
	}
	cout<<"\n\nSmall Number ::"<<small;
	getch();
}