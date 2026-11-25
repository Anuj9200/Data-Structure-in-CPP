#include <iostream>
using namespace std;
class Customer{
    string name;
    int *data;
public:
    Customer(){
        name = "Rohit";
        // data = new int;
        *data = 10;
        cout<<"constructor is called:\n";
    }
    // Destructor: destrucotr release or delete the memrory address that allocated dynamically not the object  
    ~Customer(){
        cout<<*data<<" ";
        delete(data);
        cout<<*data<<" ";
        cout<<&data<<" ";

        cout<<"Destructor is called:\n";

    }

};
int main(){
    Customer c1;


    return 0;
}