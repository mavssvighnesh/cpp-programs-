#include<iostream>
using namespace std;

class assign
{   public:
    int x,y,z,a,b,c;

    assign()
    {
        cout<<"enter the value for the a,b&c"<<endl;
        cin>>a>>b>>c;


    }
 void operator =(const assign &a)
 {
    x=a.a;
    y=a.b;
    z=a.c;

 }
    void display()
    {
        cout<<"the value of x"<<x<<endl<<"the value of the y"<<y<<endl<<"the value of z"<<z<<endl;

    }

};

int main ()
{
    assign a1,a2;
    a1.display();
    a2.display();
    a1=a2;


    ;
     a2.display();


    return(0);

}
