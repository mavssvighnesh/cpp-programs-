#include<iostream>
using namespace std::;

class student
{
	public:
	int id;
	char name[30];
	char dname[20];
    float marks;
		
		void getdata()
		{
			cout<<"enter the roll no of the student: ";
			cin>>id;
			cout<<"enter the name of the student: ";
			cin>>name;
			cout<<"enter the department name : ";
			cin>>dname;
			cout<<"enter the total marks obtained: ";
			cin>>marks;
			
		}
		void putdata()
		{ 
		  cout<<"THE ROLL NO: "<<id;
		  cout<<"THE NAME :"<<name;
		  cout<<"THE DEPARTMENT : "<<dname;
		  cout<<"THE MARKS OBTAINED: "<<marks;
		  
		}
};

int main ()
{
	student s1;
	s1.id=511;
	s1.name=vighnesh;
	s1.dname=cse;
	s1.marks=980;
	s1.putdata();
	
	return(0);
	
}
