// Here we Calls the parent constructor to initialize the parent part of the object.

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string name) {
        this->name = name;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
protected:
    float salary;

public:
    Employee(string name, float salary) : Person(name) {
        this->salary = salary;
    }

    void displaySalary() {
        cout << "Monthly salary: " << salary << endl;
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    Manager(string name, float salary, string department)
        : Employee(name, salary) {
        this->department = department;
    }

    void display() {
        displayName();
        displaySalary();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m1("Anuj", 280000, "Finance");

    m1.display();

    return 0;
}
