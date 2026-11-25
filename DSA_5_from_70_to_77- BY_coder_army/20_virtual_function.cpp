#include <iostream>
#include <vector>
using namespace std;
class Animal{
public:
    virtual void speak(){
        cout<<"Hu HU"<<endl;
    }
    // virtual void speak() = 0;  // pure virtual function
    // we cannot make object of pure virtual function
    // virtual function child mein firse implement hona chahiye
};
class Dog: public Animal{
public:
    virtual void speak(){
        cout<<"Bark"<<endl;
    }
};
class Cat: public Animal{
public:
    virtual void speak(){
        cout<<"Maew"<<endl;
    }
};
int main(){
    // Animal *p;
    // p = new Dog;
    // p->speak();

    // p = new Cat;
    // p->speak();

    // Animal *p;
    // Dog d;
    // Cat c;
    // p = &d;
    // p->speak();
    // p = &c;
    // p->speak();

    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0; i<animals.size(); i++){
        p = animals[i];
        p->speak();
    }

    return 0;
}