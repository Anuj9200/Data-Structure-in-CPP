#include <iostream>
using namespace std;
class Person{
protected:
    string name;
public:
    Person(){
        cout<<"a1"<<endl;
    }
};
class Employee : public Person{
protected:
    float salary;
public:
    Employee(){
        cout<<"a2"<<endl;
    }
};
class Manager: public Employee{
protected:
    string department;
public:
    Manager(){
        cout<<"a3"<<endl;
    }
};

int main(){
    Manager m1;

    return 0;
}