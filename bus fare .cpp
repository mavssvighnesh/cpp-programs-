#include<iostream>
using namespace std;
#include<conio.h>
int main()
{  
    int d; 
   char name[30];
   
   cout<<"welcome to the apstrc"<<endl;
   cout<<"enter ur name please"<<endl;
   cin>>name;
   cout<<"hello"<<name<<endl;
   cout<<"enter the distance u want to travel"<<endl;
   cin>>d;
   if(d<=10)
    cout<<"the fare for ur distance of "<<d<<"kms is 5 rupees"<<endl;
    else if (d<=20)
      cout<<"the fare for ur distance of "<<d<<"kms is 10 rupees"<<endl;
    else if (d<=30)
    cout<<"the fare for ur distance of "<<d<<"kms is 20 rupees"<<endl;
    else 
    cout<<"the fare for ur distance of "<<d<<"kms is "<<d*1.5<<endl;

    cout<<"thanks for visiting apstrc"<<endl;
    cout<<"enjoy ur ride"<<endl;
     return (0);
}