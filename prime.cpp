#include<iostream>
using namespace std;

int main()
{   int n,k;


    
    cout<<"enter the number to check the prime or not "<<endl;
    cin>>n;
    
     
        for(k=2;k==n/2;k++) 
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
