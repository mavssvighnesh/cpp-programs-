#include<iostream>
using namespace std;


int main ()
{
    int n,i,k;
    cout<<"enter the number of elements in the array "<<endl;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cout<<"enter the element "<<i  ;
        cin>>a[i];

    }
    cout<<"printing the numbers that are missing in the numbers from 1 to 100 in given array "<<endl;
    for(k=0;k<=100;k++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]==k)
            {
                k++;
            
            }
        }
        cout<<k <<"\t";
        
    }
}