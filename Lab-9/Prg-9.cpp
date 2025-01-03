// 9.	Create a class  Account  for account balance information that consist of following properties and methods of object
// a.	Properties : it hold the information about account  
// i.	Account no 
// ii.	Account holder name 
// iii.	Balance
// a.	void setdata(accountno, name, balance);
// b.	void withdrawal( float amt): to withdrawal the amount 
// c.	void deposit(float amt) :to deposit the amount
// d.	void mybalance() : display details of account with  balance
# include<iostream>
using namespace std;

class Account{
    int accountno;
    string name;
    float balance;

    public:
    void setdata(int accountno, string name, float balance){
        this->accountno = accountno;
        this->name = name;
        this->balance = balance;

    }
    void withdrawal( float amt){
        if (amt > balance){
            cout << "Insufficient Balance";

        } else{
            balance =  balance - amt;
        }
    }

    void deposit(float amt){
        balance = balance + amt;
    }

    void mybalance(){
        cout << "Total Balance :" << balance << endl;
    }

};

int main(){
    Account a,b,c;
    a.setdata(101,"Himalaya",3000);
    b.setdata(102,"Jhon",3500);
    c.setdata(103,"Piter",4000);

    a.withdrawal(1000);
    b.withdrawal(500);
    c.withdrawal(10000);

    a.deposit(700);
    b.deposit(5000);
    c.deposit(1500);

    a.mybalance();
    b.mybalance();
    c.mybalance();
}