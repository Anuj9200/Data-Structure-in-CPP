#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
};
int main(){
    Student sa;
    Student *s = &sa;
    s->name = "anuj";
    s->rno = 13;
    s->marks = 8.53;

    cout<<s->name<<endl;
    cout<<sa.name<<endl;

    return 0;
}