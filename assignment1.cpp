#include<iostream>
using namespace std;
class Student
{
int roll;
char name[20];
public:
	void get()
	{
		cout<<"Enter roll no of student"<<endl;
		cin>>roll;
		cout<<"Enter name of the student"<<endl;
		cin>>name;
	}
	void show()
	{
		cout<<"Roll No:"<<roll<<endl;
		cout<<"Name"<<name<<endl;
	}
};
int main()
{
	Student s;
	s.get();
	s.show();
	return 0;
}
