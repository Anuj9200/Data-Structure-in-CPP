#include <iostream>
using namespace std;
class Customer{
    string name;
    int acc_no;
    int balance;
public:
    Customer(string s, int a, int b){
        name = s;
        acc_no = a;
        balance = b;
    }
    void deposit(int amount){
        if(amount>0){
            balance += amount;
        }
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }

};
int main(){
    Customer c1("anuj", 1324, 1000);
    Customer c2("arun", 1234, 2000);
    Customer c3("anup", 1094, 6000);
    c1.deposit(100);
    c1.display();
    
    return 0;
}