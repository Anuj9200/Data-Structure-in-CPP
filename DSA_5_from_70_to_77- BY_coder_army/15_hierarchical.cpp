#include <iostream>
using namespace std;
class Human{
protected:
    string name;
    int age;
};

class Student : public Human{
protected:
    int r_no;
    int fees;
public:

    Student(string name, int age, int r_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->r_no = r_no;
        this->fees = fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<r_no<<" "<<fees<<endl;
    }
};
class Teacher: public Human{
protected:
    float salary;
public:
    Teacher(string name, int age, float salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};

int main(){
    Student s1("anuj", 19, 13, 74000);
    s1.display(); 
    Teacher t1("neeraj", 16, 30000);
    t1.display();
    
    return 0;
}