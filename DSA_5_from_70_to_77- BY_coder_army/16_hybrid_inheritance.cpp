#include <iostream>
using namespace std;
/*      Student, Boy, Girl, Male, Female       */
class Student{
public:
    void print(){
        cout<<"I am student"<<endl;
    }
};
class Male{
public:
    void maleprint(){
        cout<<"I am a man"<<endl;
    }
};
class Female{
public:
    void femaleprint(){
        cout<<"I am a female"<<endl;
    }
};
class Boy: public Student, public Male{
public:
    void boyprint(){
        cout<<"I am a boy"<<endl;
    }
};
class Girl: public Student, public Female{
public:
    void girlprint(){
        cout<<"I am a Girl"<<endl;
    }
};

int main(){
    Girl g1;
    g1.print();

    Boy b1;
    b1.maleprint();

    return 0;
}