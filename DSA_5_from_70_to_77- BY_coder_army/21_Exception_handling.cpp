// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// errors/issues . Exception occurs during the running of the program[cite: 1]

// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.[cite: 1]

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.[cite: 1]

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
            throw "amount should be greater than 0\n";
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"rs is debited successfully\n";
        }
        else if(amount<0){
            throw "amount should be greater than 0\n";
        }
        else{  // amount>balance
            throw "Your balance is low\n";
        }
    } 
    void display(){
        cout<<"Your balance is "<<balance<<"rs\n";
    }
};
int main(){
    Customer c1("anuj", 5000, 20);

    try{
    c1.deposit(100);
    c1.withdraw(6000);
    c1.deposit(200);
    }
    catch(const char *e){
        cout<<"Exception occured:"<<e<<endl;
    }

    // c1.display();

    return 0;
}