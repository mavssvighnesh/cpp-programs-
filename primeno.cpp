#include<iostream.h>
using namespace std;

int main()
{   int n,k,x;


    while(n!=0){
	
    cout<<"enter the number to check the prime or not "<<endl;
    cin>>n;
     x=n/2;
        for(k=2;k==x;k++) 
        {
            if(n%k==0)
            {
               cout<<n<<"is prime number "<<endl;
            }
        
          else
          {
             cout<<n<<"the number is not prime"<<endl;

          }
        }
        
         
}
 }

