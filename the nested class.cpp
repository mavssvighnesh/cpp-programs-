#include<iostream>
using namespace std;
#include<conio.h>

class employee
{
	
	int id;
	char name[20];
	
	class manager
	{
		float salary;
		float allowance;
		
	
	void getdata()
	{
		cout<<"enter the id,name,salary,allowance"<<endl;
		
	}
	void putdata()
	{
		cout<<id<<enld<<name<<salary<<allowance;
		
	}
};
   
};

int main ()
{
	employee::manager m1;
	m1.salary=150000;
	m1.allowance=5000;
	employee e1;
	e1.getdata();
	m1.putdata();
	
	return(0);
}
}
