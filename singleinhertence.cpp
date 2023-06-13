#include<iostream>
using namespace std;

class vighnesh
{   public:
     int x;

    void getdata()
    {
        cout<<"enter the data of the x";
        cin>>x;

    }

};
class mukund :public vighnesh
{   public:
    void printf()
    {
        cout<<"the value in the x is "<<x<<endl;

    }
};
int main ()
{
    vighnesh v1;
    mukund m1;
    m1.getdata();
    m1.printf();
    return(0);
    
}
