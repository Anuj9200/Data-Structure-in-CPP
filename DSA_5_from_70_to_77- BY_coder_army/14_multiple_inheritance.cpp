#include <iostream>
using namespace std;
class Engineer{
protected:
    string specilization;
    void work(){
        cout<<"I have specilization in "<<specilization<<endl;
    }
};
class Youtuber{
protected:
    int subscriber;
    void content(){
        cout<<"I have a subscriber base of "<<subscriber<<endl;
    }
};
class Codeteacher: public Engineer, public Youtuber{
public:
    string name;
    
    Codeteacher(string name, string specilization, int subscriber);
    
    void display(){
        cout<<"my name is "<<name<<endl;
        content();
        work();
    }
};

// can intilize in outside class by using scope resolution operator
Codeteacher :: Codeteacher(string name, string specilization, int subscriber){
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;
    }

int main(){
    Codeteacher c1("anuj", "coding", 500000);
    c1.display();

    return 0;
}