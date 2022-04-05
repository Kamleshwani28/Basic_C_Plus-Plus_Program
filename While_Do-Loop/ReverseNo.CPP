// Program for Print Integer in Reverse 

#include<iostream.h>
#include<conio.h>
void main()
{

	int a,n;
	clrscr();
	cout<<"\nEnter No:";
	cin>>n;
	while(n>0)
	{
		a=n%10;
		cout<<a;
		n=n/10;
	}
	getch();
}