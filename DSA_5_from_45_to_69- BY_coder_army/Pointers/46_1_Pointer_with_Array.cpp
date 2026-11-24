#include <iostream>
using namespace std;
int main(){
    int arr[5] = {11, 7, 8, 5, 4};

    for (int i=0; i<5; i++){
        cout<<"Value at address :: "<<&arr[i]<<" :: ";
        cout<<arr[i]<<" ";
        cout<<*(arr+i)<<" "<<endl;
    }

    cout<<"Print Value of array using Pointer :: ";
    int *ptr = arr;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";    // ptr can bahave same as array but array cannot bahave like ptr 
    }
    cout<<endl;

    // Arithmetic Operation
    cout<<"Arithmetic Operation in (ptr++) :: ";
    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;


    // it will give random value, because ptr points arr[5] which not exists
    cout<<*ptr<<" "<<ptr<<endl;

    // char ke liye & lgana pdega
    char arr1[5] = "snfd";
    char *c = arr1;
    cout<<"address of first character : "<<*c<<endl;
    
    for(int i=0; i<4; i++){
        cout<<&c<<" ";    // print address
        cout<<c<<" ";     // print char from that pointer to null
        cout<<*c<<endl;   // print only that char
        c++;
    }

    return 0;
}