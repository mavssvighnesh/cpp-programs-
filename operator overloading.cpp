#include<iostream>
using namespace std;

class unaryop
{
     int x,y,z,a,b,c;
     
     public:
     unaryop()
     {
        x=a;
        y=b;
        z=c;

     }

     unaryop(int a,int b,int c)
     {
        x=a;
        y=b;
        z=c;

     }
     void display()
     {
        cout<<x<<endl<<y<<endl<<z;

     }
     void operator-();

     };

     void unaryop::operator -()
     {
        x=-x;
        y=-y;
        z=-z;

     }
     int main ()
     {
        unaryop obj(50,30,-11);
        cout<<"number before overloading \n";
        obj.display();
        -obj;
        cout<<"NUMBERS AFTER THE OVERLOADING \n";
        obj.display();
        return(0);

     }
