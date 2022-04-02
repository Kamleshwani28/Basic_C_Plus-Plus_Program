// Program to find Average of an Array

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	float a[5];
	int i;
	for ( i=0 ; i<5 ; i++ )
	{
		cout << "\nEnter Number ::";
		cin >> a[ i ];
	}
	float  s = 0;
	for( i=0 ; i<5 ; i++ )
	{
		s = s + a[ i ];
	}
	float  avg = s / 5;
	cout << "\n\nAverage Number :: " << avg;
	getch();
}
