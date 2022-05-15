#include<iostream.h>
#include<conio.h>
class Student
{
	private:
		int id;
		char name[20];
	public:
		void getInfo();
		void showInfo()
		{
			cout<<"\nId"<<id;
			cout<<"\nname"<<name;
		}

};
void Student::getInfo()
{
	cout<<"\nEnter the Id and Name :";
	cin>>id>>name;
}
class Teacher
{
	private:
		int id;
		char name[20];
	public:
		void getInfo();
		void showInfo()
		{
			cout<<"\nId"<<id;
			cout<<"\nname"<<name;
		}

};
void Teacher::getInfo()
{
	cout<<"\nEnter the Id and Name :";
	cin>>id>>name;
}
void main()
{
	clrscr();
	Student S;
	S.getInfo();
	S.showInfo();
	getch();

}