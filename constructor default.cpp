#include<iostream>
using namespace std;
#include<conio.h>

class student //class creation and the name assignment

{   public://acess specifer 
    int id;//variables decalration
    char name[30];
    char dname[20];
    float marks;
    student()//constructor (default)
    {
        cout<<"default constructor is created"<<endl;
    }
    student(int a,int b)//parameter constructor
    {
    	cout<<"the parameterized constructor is created"<<endl;
	}
};
int main()//main function
{ 
    student s1,s2(2,3);//object creation for the class
     
     return(0);
     
}     
