/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Bank{
    public:
    string name;
    int acount_no,dep,wd;
    float balance;
    
    public:
    void get_values(){
        cout<<"Enter the Name of Acount Holder:";
        cin>>name;
        cout<<"Enter the Account no:";
        cin>>acount_no;
        cout<<"Enter the Bank balance:";
        cin>>balance;
    }
    void deposit(){
        cout<<"Enter the value of Deposit Amount:";
        cin>>dep;
        balance=balance+dep;
        cout<<"Depositeed Amount is:"<<dep<<endl;
        cout<<"After deposite,the bank balance is"<<balance<<endl;
    }
    void withdraw(){
        cout<<"Enter the value of withdrawal Amount:";
        cin>>wd;
        if(balance<0 || balance<wd){
            cout<<"you can not withdraw any amount"<<endl;
        }
        else{
             balance=balance-wd;
             cout<<"withdrawal Amount is:"<<dep<<endl;
             cout<<"After withdrawal amount,the bank balance is"<<balance<<endl;
        }
    }
    
    void display(){
        cout<<"Account Holder Name :"<<name<<endl;
         cout<<"Account number  :"<<acount_no<<endl;
          cout<<"Current Balance :"<<balance<<endl;
        
    }
};

int main(){
    Bank b1;
    int ch,k;
    do{
        cout<<"1.Get Values\n2.Deposite Amount\n3.Withdrawal Amount\n4.Display\nEnter Your Choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:b1.get_values();
                   break;
            case 2:b1.deposit();
                   break;
            case 3:b1.withdraw();
                   break;
            case 4:b1.display();
                   break;
            default:cout<<"Wrong Choice"<<endl;
        }
        cout<<"If you want to continue press 1:";
        cin>>k;
    }while(k==1);
    return 0;
}