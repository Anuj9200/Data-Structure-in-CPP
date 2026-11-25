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
int main(){
    Student s1("Anuj", 20, 16, 5000);
    s1.display();

    return 0;
}