#include <iostream>
using namespace std;
class Customer{
    string name;
    int balance, a_no;
public:
    Customer(string name, int balance, int a_no){
        this->name = name;
        this->balance = balance;
        this->a_no = a_no;
    }
    void deposit(int amount){
        if(amount>0){
            balance += amount;
            cout<<amount<<"rs is credited successfully\n";
        }
        else{
            throw runtime_error ("amount should be greater than 0\n");
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"rs is debited successfully\n";
        }
        else if(amount<0){
            throw runtime_error( "amount should be greater than 0\n");
        }
        else{
            throw runtime_error( "Your balance is low\n");
        }
    }
};
int main(){
    Customer c1("anuj", 5000, 20);

    try{
    c1.deposit(100);
    c1.withdraw(6000);
    c1.deposit(200);
    }
    
    catch(const runtime_error &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }



    return 0;
}