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
     void operator ++ (){
          x=x++;
          y=y++;
          z=z++;
     }

     };

     
     int main ()
     {  int i=0;
        unaryop obj(50,30,11);
        cout<<"number before overloading \n";
        obj.display();
        ++obj;
        cout<<"\n NUMBERS AFTER THE OVERLOADING \n";
        obj.display();
        return(0);

     }
