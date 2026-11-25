#include <iostream>
using namespace std;

// Class Definition
class Student {
private:
    string name;
    int roll;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    // Friend function to overload << operator
    friend void operator<<(ostream& out, const Student& s) {
    out << "Name: " << s.name << endl;
    out << "Roll No: " << s.roll << endl;
    out << "Marks: " << s.marks << endl;
    
}
};

// Overloading << operator


// Main Function
int main() {
    Student s1("Anuj Tiwari", 101, 92.5);
    cout << s1; // Using overloaded << operator
    return 0;
}


// // real code

// #include <iostream>
// using namespace std;

// // Class Definition
// class Student {
// private:
//     string name;
//     int roll;
//     float marks;

// public:
//     // Constructor
//     Student(string n, int r, float m) {
//         name = n;
//         roll = r;
//         marks = m;
//     }

//     // Friend function to overload << operator
//     friend ostream& operator<<(ostream& out, const Student& s);
// };

// // Overloading << operator
// ostream& operator<<(ostream& out, const Student& s) {
//     out << "Name: " << s.name << endl;
//     out << "Roll No: " << s.roll << endl;
//     out << "Marks: " << s.marks << endl;
//     return out;
// }

// // Main Function
// int main() {
//     Student s1("Anuj Tiwari", 101, 92.5);
//     cout << s1; // Using overloaded << operator
//     return 0;
// }

