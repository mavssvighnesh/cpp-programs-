#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>


int main ()
{
    float p,t,r,si,ci;
    char name[30];


    cout<<"WELCOME TO STATE BANK OF INDIA"<<endl;
    cout<<"PLEASE ENTER UR NAME:";
    cin>>name;
    cout<<"HELLO"<<name<<endl;
    cout<<"ENTER THE PRINCIPAL AMOUNT U WANT TO BORROW:";
    cin>>p;
    cout<<"ENTER THE RATE OF INTEREST: ";
    cin>>r;
    cout<<"ENTER THE TIME PERIOD: ";
    cin>>t;
    si=(p*t*r)/100;
    cout<<"THE SIMPLE INTEREST IS:"<<si<<endl;
    cout<<"THE TOTAL AMOUNT PAYABLE WITH THE SIMPLE INTEREST :"<<si+p<<endl;
    ci=p*pow(((1+r)/100),t);
    cout<<"THE COMPOUND INTEREST IS :"<<ci-p<<endl;
    cout<<"THE TOTAL AMOUNT PAYABLE WITH THE COMPOUND INTEREST IS :"<<ci<<endl;
    cout<<"THANKS FOR VISITING THE STATE BANK OF INDIDA ";
    return(0);

}
