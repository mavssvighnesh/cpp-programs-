#include<iostream>
#include<iomanip>
using namespace std;


class bank 
{   
  public:

   int id,k=100,v,m,j=0,r=0,amt=0;
   char name[30],pass[10],a[10];
   int bal,dep,with;

    

     void newacc(int r){
          int i=0;
          

          cout<<"ur account number is:"<<r<<endl;
          cout<<"enter the account holder name"<<endl;  
           cin>>name;
          cout<<"create a six digit password"<<endl;
          cin>>setprecision(6)>>m;
          cout<<"enter the intial deposit amount"<<endl;
           cin>>bal;
          cout<<"your account is created succesfully with name  "<<name<<endl<<" with id "<<r<<endl<<" and the balance of  "<<bal<<endl;
          cout<<m;
          cout<<"TRANSICTION IS COMPLETED SUCESSFULLY"<<endl;
          i++;
          r++;
          
       }  
      

       int cpassword()
      {cout<<name<<endl;
        start:
          cout<<"enter ur password 6 digit pin";
           cin>>v;
   
   
           if(m==v)
          { 
            cout<<endl;

           }
    
          else 
          {
            while(j<2){
    
             cout<<"please try again "<<endl;
              j++;
             goto start;
             }
              cout<<"transcition failed try again"<<endl;
               }
      
        return(0);
       }
         

        
      
     void balc(){
          

           cout<<"your name:"<<name<<endl;
           cpassword();

          cout<<"your current balance is"<<bal<<endl;
          cout<<"TRANSICTION IS COMPLETED SUCESSFULLY"<<endl;
          
        }

     void depo(){
       cout<<"your name:"<<name<<endl;
       cpassword();
        cout<<"your current balance "<<bal<<endl;
       while(k=1){
          
        start:
           
           cout<<"enter the amount u want to deposit"<<endl;
           cin>>dep;
         if(dep>25000) {
            cout<<"the limit is 25000 "<<endl;
            goto start;
         }
         else{
          bal=bal+dep;
          cout<<"ur current balance is "<<bal<<endl;
          break;
         }
       }
     }
      void withd(){
            cout<<"your name:"<<name<<endl;
            cpassword();

         cout<<"ur current bal is "<<bal<<endl;
         cout<<"the withdrawal limit is 25000"<<endl;


         while(k=1){
    
         s1:
          cout<<"enter the amount u want to withdraw"<<endl;
          cin>>with;
         if(with>25000){  
            limit:
             cout<<"the withdrwal limit is crossed "<<endl;
             goto s1;
         }

          else{
           if(with>bal){
            cout<<"insufficient balance"<<endl;
            goto s1;

          }
          else {
             bal=bal-with;
             cout<<"ur current balance after the withdrawal is "<<bal<<endl;
             break;
          }
        }
         }
     }

};

int main ()
{   

    int j=0,i=0,k=1,l=0,r=0,amt=0;

    bank b[2000];
    
   


    while(j!=7)
    {
        cout<<"MENU"<<endl;
        cout<<"1.new account"<<endl<<"2.deposit"<<endl<<"3.withdrawal"<<endl<<"4.balance"<<endl<<"5.neft"<<endl<<"6.password change"<<endl<<"7.exit"<<endl;
        cout<<"ENTER UR OPTION"<<endl;
        cin>>j;

        switch(j)
         {
            case(1):
            {   
               

                b[i].newacc(l);
                i++;
                l++;

                
                break;

                
            }
            case(2):
            {   cout<<"ENTER UR ACCOUNT ID"<<endl;
                cin>>i;
               
                 b[i].depo();
                break;

            }
            case(3):
            {   cout<<"ENTER UR ACCOUNT ID"<<endl;
                cin>>i;
                b[i].withd();
                break;
            }
            case(4):
         {      cout<<"ENTER UR ACCOUNT ID"<<endl;
                cin>>i;
                
                b[i].balc();
                break;

         }
            case(5):
         {        cout<<"ENTER UR ACCOUNT ID"<<endl;
                  cin>>i;
                  b[i].balc();
                 cout<<"please enter the account number of the beneficiary"<<endl;
                  cin>>r;
                  cout<<"beneficiary name "<<b[r].name<<endl;

                  cout<<"enter the amount u want to transfer"<<endl;
                  cin>>amt;
                  b[i].bal-=amt;
                  b[r].bal+=amt;
                  cout<<"transfer succesful"<<endl;
                  cout<<"the amount of rupess "<<amt<<" transfered to account no. "<<r<<" of "<<b[r].name<<endl;
                  cout<<"know ur balance after the transfer"<<endl;
                  cout<<"ENTER UR ACCOUNT ID"<<endl;
                  cin>>i;
                  b[i].balc();
                  break;
        }
           case(6):
            { cout<<"ENTER UR ACCOUNT ID"<<endl;
              cin>>i;
             cout<<"your name"<<b[i].name<<endl;
             b[i].cpassword();
             cout<<"enter ur new 6 digit password";
             cin>>b[i].m;
             cout<<"ur password change is successful"<<endl;
             break;

            }

         case(7):
               exit(0);
    }
    }

    return(0);
}
