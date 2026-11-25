#include <iostream>
using namespace std;

int main(){
    try{
        int *p = new int[1000000];     // If memory allocation fails, new throws a std::bad_alloc exception.
        cout<<"Memory allocation is successfull\n";
        delete[]p;
    }
    catch(const exception &e){   // Catches exceptions derived from std::exception, including std::bad_alloc.
        cout<<"Exception Occured due to "<<e.what()<<endl;
    }

    return 0;
}