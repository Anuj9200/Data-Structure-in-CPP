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
    void set_detail(string name, int age, int rno, string grade){
        this->name = name;
        this->age = age;
        this->rno = rno; 
        this->grade = grade; 
    }
    void get_detail(){
        cout<<"name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<rno<<endl;
        cout<<"grade : "<<grade<<endl;
    }
};

// void Student :: set_detail(string name, int age, int rno, string grade)
//     {
//         this->name = name;
//         this->age = age;
//         this->rno = rno; 
//         this->grade = grade; 
//     }

int main(){
    Student s1;

    s1.set_detail("anuj", 19, 13, "A");
    // s1.grade = "C";
    s1.get_detail();

    return 0;
}