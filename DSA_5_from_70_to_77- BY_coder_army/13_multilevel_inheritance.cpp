#include <iostream>
using namespace std;

class Person{
protected:
    string name;
public:
    void display(){
        cout<<"Hello my name is : "<<name<<endl;
    }
};

class Employee:public Person{
protected:
    float salary;
public:
    void display(){
        cout<<"Monthly salary is : "<<salary<<endl;
    }
};

class Manager:public Employee{
protected:
    string department;
public:
    Manager(string name, float salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
};

int main(){
    Manager m1("anuj", 280000, "finance");
    m1.display();
    
    return 0;
}