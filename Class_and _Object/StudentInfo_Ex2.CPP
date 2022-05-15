#include<iostream.h>
#include<conio.h>
class Student
{
	private:
		char name[20];
		int rollno;
		float fees;
	public:
		void setStudent()
		{
			cout<<"\nEnter Name ::";
			cin>>name;
			cout<<"\nEnter Roll no ::";
			cin>>rollno;
			cout<<"\nEnter Fees ::";
			cin>>fees;
		}
		void getStudent()
		{
			cout<<"\n"<<name;
			cout<<"\n"<<rollno;
			cout<<"\n"<<fees;
		}
		void getData()
		{
			cout<<"\nName"<<"\tRollno"<<"\t Fees";
			cout<<"\n\n"<<name<<"\t"<<rollno<<"\t"<<fees;
                }
};
void main()
{
	clrscr();
	Student S1,S2,S3;
	S1.setStudent();
	S1.getStudent();
	S2.setStudent();
	S2.getStudent();
	S3.setStudent();
	S3.getStudent();
	S1.getData();
	getch();
}

