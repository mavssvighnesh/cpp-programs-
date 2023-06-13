#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    float num=2.3334;
    cout<<"the original number "<<num<<endl;
    cout<<"the controlled output"<<setprecision(2)<<num;

    return(0);

}