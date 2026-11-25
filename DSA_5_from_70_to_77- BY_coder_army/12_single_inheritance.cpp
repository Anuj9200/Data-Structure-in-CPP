#include <iostream>
using namespace std;

class Human{
protected:
    string name;
    int age;

public:
    void work(){
        cout<<"i am working\n";
    }
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
    // The compiler checks all class constructors, even if no object is created. Since Student doesn't explicitly initialize Human, the compiler tries to call Human(). If it doesn't exist, a compilation error occurs.
    Human(){
        cout<<"Hello Human"<<endl;
    }
    void display(){
        cout<<name<<" "<<age<<"\n";
    }
};

class Student : public Human{
private:
    int r_no;
    int fees;

public:
    // When a child object is created, the parent constructor is called first, followed by the child constructor.
    // This Student constructor explicitly does'nt call parent constructor so here there is need of default parent contructor.
    // Because when parent construtor is not explicitly defined the compiler automatically calls default constructor if default not present it will error.
    Student(string name, int age, int r_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->r_no = r_no;
        this->fees = fees;
    }

    // Both works same thing but it first calls Human constructor and then student constructor:
    // It explicitly call parent constructor so here there is no need default parent contructor
    // Student(string name, int age, int r_no, int fees):Human(name, age)
    // {
    //     this->r_no = r_no;
    //     this->fees = fees;
    // }
 
    void display(){
        cout<<name<<" "<<age<<" "<<r_no<<" "<<fees<<endl;
    }
};
int main(){
    Human h1("rish", 20);
    h1.display();
    h1.work();

    // Student s1("Anuj", 20, 16, 5000);
    // s1.display();

    return 0;
}