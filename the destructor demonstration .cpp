#include<iostream>
using namespace std;

int age;


class constructor 
{   
    public:
     


     constructor(){
        cout<<"the default constructor is intiated"<<endl;
        cout<<"please enter ur age"<<endl;
        cin>>age;
         }

     ~constructor(){
        cout<<"the destructor is intiatied"<<endl;

       }

};

int main ()
{
    

    constructor c1;
    cout<<"the age of the user is "<<age<<endl;

    return(0);

}