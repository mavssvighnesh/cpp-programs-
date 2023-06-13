#include<iostream>
using namespace std;
#include<conio.h>

class student 
{    
    public:
    int id;
    char name[30];
    char dname[20];
    int marks;

    void getdata()
    {
        cout<<"enter the data respectively id,name,dname,marks"<<endl;
        cin>>id>>name>>dname>>marks;

    }
    void putdata()
    {
        cout<<"THE ID :"<<id;
        cout<<"THE NAME :"<<name;
        cout<<"THE DNAME: "<<dname;
        cout<<"THE MARKS: "<<marks;

    }
    void print();

};

int main ()
{
    student s1;
    s1.id=511;
    s1.name[30]='vighnesh';
    s1.dname[20]='cse';
    s1.marks=980;
    s1.putdata();
    s1.print();
    return(0);

}