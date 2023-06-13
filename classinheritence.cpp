#include<iostream>
#include<conio.h>
using namespace std;

class employee 
{   
    protected:
	int empid;
	int salary;
	char ename[30];
	char city[10];
	
	public:
	void details()
	{
		cout<<"enter the id of employee"<<endl;
		cin>>empid;
		cout<<"enter the name of the employee"<<endl;
		cin>>ename;
		cout<<"enter the employee city"<<endl;
		cin>>city;
		cout<<"enter the employee salary"<<endl;
		cin>>salary;
		
	}
     void putdetails()
     {
     	cout<<"id:"<<empid<<endl;
     	cout<<"name:"<<ename<<endl;
     	cout<<"city:"<<city<<endl;
     	cout<<"salary:"<<salary<<endl;
     	
	 }
	 
};
class manager:public employee
{   
    protected:
	int rent;
	int car;
	
	public:
	void mdetails()
	{   
		cout<<"enter the rent:"<<endl;
		cin>>rent;
		cout<<"enter the car allowance amout:"<<endl;
		cin>>car;
	}
	void mput()
	{
	  
	   cout<<"rent:"<<rent<<endl;
	   cout<<"car allowance:"<<endl;
	   
    }
	};
	
	int main ()
	{   
	    
	    
   		employee e1;
		manager m1;
		cout<<"enter the details of employee"<<endl;
		e1.details();
		cout<<"enter the detials of manager"<<endl;
		m1.details();
		m1.mdetails();
		
		    cout<<"employee details"<<endl;
			e1.putdetails();
			cout<<endl<<"manager details";
			m1.putdetails();
			m1.mput();
			
			
			return(0);
	}
	

