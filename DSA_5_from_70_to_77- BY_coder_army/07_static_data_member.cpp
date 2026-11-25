#include <iostream>
using namespace std;
class Customer{
    string name;
    int acc_no;
    int balance;
    static int total_customer;
    static int total_balance;
public:
    // static int total_customer;
    Customer(string name, int acc_no, int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer ++; 
        total_balance += balance;
    }
    // Static member function:
    static void acces_static(){
        cout<<"Total no. of customer : "<<total_customer<<endl;
        cout<<"Total balance : "<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount<=balance){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
    }
    void display_balance(){
        cout<<"balance : "<<balance<<endl;
    }
};
int Customer::total_customer = 0;
int Customer::total_balance = 0;
int main(){
    Customer c1("anuj", 1324, 10000);
    Customer c2("arun", 1234, 20000);
    Customer c3("anup", 1094, 60000);

    // c1.display();
    // c2.display();

    // we can access static data member in main() but it should be declare in class 
    // Method 1 : ye tbhi access hoga jb static member public ho
    // Customer:: total_customer = 5;     
    // c1.display_total();
    // Method 2 :
    // cout<<c1.total_customer<<endl;

    // Static member function :: use to access static member declared in private  
    c1.deposit(40000);
    Customer::acces_static();

    c1.withdraw(30000);
    Customer::acces_static();
    
    c2.deposit(20000);
    Customer::acces_static();

    c1.display_balance();   // print balance of customer 1 - c1
    c2.display_balance();   // print balance of customer 2 - c2

    c1.display();

    return 0;
}