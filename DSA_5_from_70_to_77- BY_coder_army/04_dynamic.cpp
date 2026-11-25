#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
};
void display(){
    cout<<name;
}
int main(){
    Student *s = new Student;
    
    // *s.name = "anuj";
    s->name = "anuj";
    s->rno = 13;
    s->marks = 8.53;

    cout<<s->name<<endl;
    cout<<s->rno<<endl;
    return 0;
}