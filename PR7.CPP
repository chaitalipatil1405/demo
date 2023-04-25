#include<iostream.h>
#include<conio.h>
class student
	{
	char name[20];
	int r_no;
	char br[10];
	char m_no[10];
	static int count;   //static variable.
	public:
	void get_detail()
		{
		cout<<"Enter Your Name:";
		cin>>name;
		cout<<"Enter Your Roll_no:";
		cin>>r_no;
		cout<<"Enter Your Branch:";
		cin>>br;
		cout<<"Enter Your Mobile No:";
		cin>>m_no;
		count++;
		}
	void display()
		{
		cout<<"Your Detail is:"<<endl;
		cout<<"Your Name is:"<<name<<endl;
		cout<<"Your Roll No is:"<<r_no<<endl;
		cout<<"Your Branch is:"<<br<<endl;
		cout<<"Your Mobile no is:"<<m_no<<endl;
		}
	void static getcount();

	};
void student::getcount()
	{
	cout<<"Total number of objects are:"<<count<<endl;
	}
int student::count=0;
int main()
	{
	int ch;
	clrscr();
	do
	{
	cout<<"Press 1 for Creation of Object.\nPress 2 for Counting Object.";
	cin>>ch;
	switch(ch)
		{
		case 1:
		student s;
		s.get_detail();
		s.display();
		break;
		case 2:
		student::getcount(); //call to static function.
		break;
		default:
		cout<<"Invalid Choice.";
		}
	}while(ch<=2);
	getch();
	return 0;
	}