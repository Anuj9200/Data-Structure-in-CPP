// Inheritance : inheritance is the process by which object of one class can acquire the properties of object of another class.

#include <iostream>
using namespace std;
class Human{
private:
    string Religion;
    string color;
public:
    string name;
    int age;
    int weight;
};
 
class Student : protected Human{
private:
    int r_no;
    int fees;
public:
    void fun(string name, int age, int weight, int r_no, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->r_no = r_no;
        this->fees = fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<r_no<<" "<<fees<<endl;
    }
};

class Teacher : protected Human{
    int salary, id;
public:
    Teacher(int salary, int id){
        this->salary = salary;
        this->id = id;
    }
    void display(){
        cout<<salary<<" "<<id<<endl;
    }

};

int main(){
    Student s1;
    // // s1.name = "anuj";  // cannot access in main() beacause access modifier is protected

    s1.fun("anuj", 18, 60, 13, 72790);  
    s1.display();
    // Student s1("anuj", 18, 60, 13, 72790);  // at place of fun we can make constructor
    // s1.display();

    Teacher t1(50000,24011052);  // calling constructor
    t1.display();

    Human d;
    // d.age = 13;   // cannot access in main()

    return 0;
}