#include<iostream.h>
#include<conio.h>
struct student
	{
	char name[20];
	int age;
	int r_no;
	char br[10];
	};
int main()
{
struct student s;
clrscr();
cout<<"Enter Your Name:";
cin>>s.name;
cout<<"Enter Your Roll No:";
cin>>s.r_no;
cout<<"Enter Your Branch:";
cin>>s.br;
cout<<"Enter Your Age:";
cin>>s.age;

cout<<"Your Detail is:"<<endl;
cout<<"Your Name is:"<<s.name<<endl;
cout<<"Your Roll No is:"<<s.r_no<<endl;
cout<<"Your Branch is:"<<s.br<<endl;
cout<<"Your Age is:"<<s.age<<endl;

getch();
return 0;
}