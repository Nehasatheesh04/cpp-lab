#include<iostream>
using namespace std;
class bank
{
    private:
    string cust_name;
    int acc_no;
    string acc_type;
    float bal=0; 
    public:
    void create_acc(void);
    void withdraw(void);
    void deposit(void);
    void acc_statement(void);
    void put_balance(void)
    {
        int x;
        cout<<"enter your account no: ";
        cin>>x;

        cout<<"your current balance is "<<bal<<"\n";
    }
};

void bank::create_acc(void)
{
    int acc_type_info;
    cout<<"CREATING AN ACCOUNT"<<"\n";
    cout<<"enter your name: ";
    cin>>cust_name;
    cout<<"choose the account type you prefer: "<<"\n";
    cout<<"1.savings account"<<"\n";
    cout<<"2.current account"<<"\n";
    cin>>acc_type_info;

    if (acc_type_info==1)
    {
        acc_type="savings account";
        cout<<"You've successfully created a saving's account"<<"\n";
    }

    else if(acc_type_info==2)
    {
        acc_type="current account";
        cout<<"you have successfully created a current account"<<"\n"; 
    }

    acc_no=(rand()+acc_type_info);
    cout<<"your account number is= "<<acc_no<<"\n";



} 


    
void bank::deposit()  
    {
        float amount;
        cout<<"enter the amount to be deposited: "<<"\n";
        cin>>amount;
        bal=bal+amount;
        cout<<"successfully deposited"<<"\n";
    }
     
void bank::withdraw()
    {
    float amount;
    cout<<"enter amount to be withdrawn"<<"\n";
    cin>>amount;
    if(amount>bal-500)
    {
        cout<<"amount cannot be withdrawn due to insufficient balance";
    }
    else
    {
        bal=bal-amount;
        cout<<amount<<"successfully withdrawn"<<"\n";
        cout<<"current balance is "<<bal<<"\n";
    }
}
    
void bank::acc_statement()
{
    cout<<"account no: "<<acc_no<<"\n";
    cout<<"Name      : "<<cust_name<<"\n";
    cout<<"account type:"<<acc_type<<"\n";
    cout<<"balance: "<<bal<<"\n";
}

int menu()
    {
        int choice;
        cout<<"1.ADD NEW ACCOUNT"<<"\n";
        cout<<"2.WITHDRAWN AMOUNT"<<"\n";
        cout<<"3.DEPOSIT AMOUNT"<<"\n";
        cout<<"4.ENQUIRE BALANCE"<<"\n";
        cout<<"5.BANK ACCOUNT STATEMENT"<<"\n";
        cout<<"choose an option";
        cin>>choice;
        return choice;
    }

int main()
{
    bank b1;
    int x;
    char next;
    x=menu();
    next='y';
    while(next=='y'||next=='Y')
    {
        if(x==1)
        {
            b1.create_acc();
        }
        else if(x==2)
        {
            b1.withdraw();
        }
        else if(x==3)
        {
            b1.deposit();
        }
        else if(x==4)
        {
            b1.put_balance();
        }
        else if(x==5)
        {
            b1.acc_statement();
        }
        cout<<"do you want to continue?(y/n)"<<"\n";
        cin>>next;
        if(next=='y'||next=='Y')
        {
            x=menu();
        }
    }

}
        
    


    