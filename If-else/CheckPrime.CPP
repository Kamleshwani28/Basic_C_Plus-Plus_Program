// Program fo Check Number Is Prime Or Not

#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,flag=1;
	clrscr();
	cout<<"\nEnter the No:";
	cin>>n;
	if(n==1)
	{
		flag=1;
	}
	else
	{
		for (i=2;i<n;i++)
		{
			if(n%2==0)
			{
				flag=0;
				break;
			}
		}
	}
	if (flag==1)
	{
		cout<<"\nNumber is prime";
	}
	else
	{
		cout<<"\nNumber is Not prime";
	}
	getch();
}
