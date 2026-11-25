// Class - it is user defined data type blueprint for creating objects.

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int rno;
    
public:
    string grade;
    friend void get_detail(Student s);
    set_detail(string name, int age, int rno, string grade)
    {
        this->name = name;
        this->age = age;
        this->rno = rno; 
        this->grade = grade; 
    }
};

void get_detail(Student s){
        cout<<"name : "<<s.name<<endl;
        cout<<"Age : "<<s.age<<endl;
        cout<<"Roll no : "<<s.rno<<endl;
        cout<<"grade : "<<s.grade<<endl;
    }

int main(){
    Student s1;

    s1.set_detail("anuj", 19, 13, "A");
    get_detail(s1);

    return 0;
}