#include <iostream>
using namespace std;
class Customer{
public:
    string name;
    int acc_no;
    float balance;

    Customer(){
        name = "rohit";
        acc_no = 12344;
        balance = 10029;
    } 

    // Parameterized Constructor:
    Customer(string name, int acc_no, float balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // Constructor Overloading
    Customer(string name, int acc_no){
        this->name = name;
        this->acc_no = acc_no;
        balance = 1000;
    }

    // Inline Constructor:
    inline Customer(int a, string n, float b): acc_no(a),name(n), balance(b){
    }

    // Copy Constructor: we can also make our copy constructor
    // Customer(Customer &c){
    //     name = c.name;
    //     acc_no = c.acc_no;
    //     balance = c.balance;
    // }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer c1;    // Default constructor
    Customer c2("anuj", 123, 32221);    // parameterized constructor
    Customer c3("arun", 1332);      // constructor Overloading or parameterized constructor
    Customer c4(1234, "ambuja", 32139);     // Inline constructor
    Customer c5(c2);        // copy constructor- it automatically called like default constructor also you can make
    
    Customer c6;
    c6 = c3;     // it works like copy constructor it assign the value c3 into c6

    c1.display();
    c2.display();
    c3.display(); 
    c4.display(); 
    c5.display();
    c6.display();


    return 0;
}