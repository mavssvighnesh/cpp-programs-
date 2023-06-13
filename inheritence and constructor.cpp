#include<iostream>
using namespace std;
#include<conio.h>

class employee
{   
    public:

    int empid;
    char ename[30];
    float salary;

    employee()
    {
        cout<<"the default constructor is created for employee"<<endl;

    }

    
    void getdetails()
    {
        cout<<"enter the details of the employee as fllow"<<endl;
        cout<<"employee id:";
        cin>>empid;
        cout<<"employee name:";
        cin>>ename;
        cout<<"employee salary:";
        cin>>salary;

    }
    void putdetails()
    {
        cout<<"THIS ARE THE EMPLOYEE DETAILS U HAVE ENTERED"<<endl;
        cout<<"EMPLOYEE ID:"<<empid<<endl;
        cout<<"EMPLOYEE NAME:"<<ename<<endl;
        cout<<"EMPLOYEE SALARY:"<<salary<<endl;

    }
};

class manager:public employee
{   

    public:
    int car,rent;

    manager()
    {
        cout<<"the default constructor for manager is created"<<endl;

    }
    
    void getdata()
    {
        cout<<"enter the car allowance for the employee"<<endl;
        cin>>car;
        cout<<"enter the rent allowance for the employee"<<endl;
        cin>>rent;

    }
    void putdata()
    {
        cout<<"CAR ALLOWANCE:"<<car<<endl;
        cout<<"RENT ALLOWANCE:"<<rent<<endl;

    }
};

int main()
{
    
    
    manager m1;
    employee e1;
    e1.getdetails();
    e1.putdetails();
    cout<<"ENTER THE DETIALS OF THE MANAGER\n";
    m1.getdetails();
    m1.getdata();
    m1.putdetails();
    m1.putdata();

    return(0);

}