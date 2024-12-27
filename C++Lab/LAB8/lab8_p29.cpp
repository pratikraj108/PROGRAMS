/*Define a class in C++ to represent bank account. The data to be stored is account number, name, balance in account. Assume maximum of 10 customers in bank 
a) write number concern to print name and account number of the customer with balance below RS.100 
b) write member functions for withdrawal and deposit*/

#include<iostream>
using namespace std;
class Bank
{
    int Acc_No[10];
    char name[10][20];
    float balance[10];
    int n;
    public:
    void getdata();
    void display();
    void withdrawl();
    void deposit();
};
void Bank::getdata()
{
    cout<<"Enter the number of customers:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the account number:";
        cin>>Acc_No[i];
        cout<<"Enter the name:";
        cin>>name[i];
        cout<<"Enter the balance:";
        cin>>balance[i];
    }
}
void Bank::display()
{
    for(int i=0;i<n;i++)
    {
        if(balance[i]<100)
        {
            cout<<"Name:"<<name[i]<<endl;
            cout<<"Account number:"<<Acc_No[i]<<endl;
        }
    }
}
void Bank::withdrawl()
{
    int acc_no;
    float amount;
    cout<<"Enter the account number:";
    cin>>acc_no;
    cout<<"Enter the amount to be withdrawl:";
    cin>>amount;
    for(int i=0;i<n;i++)
    {
        if(Acc_No[i]==acc_no)
        {
            if(balance[i]>amount)
            {
                balance[i]=balance[i]-amount;
                cout<<"Amount withdrawn successfully"<<endl;
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }
        }
    }
}
void Bank::deposit()
{
    int acc_no;
    float amount;
    cout<<"Enter the account number:";
    cin>>acc_no;
    cout<<"Enter the amount to be deposited:";
    cin>>amount;
    for(int i=0;i<n;i++)
    {
        if(Acc_No[i]==amount)
        {
            balance[i]=balance[i]+amount;
            cout<<"Amount deposited successfully"<<endl;
        }
    }
}
int main()
{
    Bank b;
    b.getdata();
    b.display();
    b.withdrawl();
    b.deposit();
    return 0;
}
