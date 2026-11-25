#include<iostream>
using namespace std;

class BIKE {
private:
    string Make, Model, Colour;
    int EngineCC;

public:
    void input() {
        cout << "Enter Make: ";
        cin >> Make;
        cout << "Enter Model: ";
        cin >> Model;
        cout << "Enter Colour: ";
        cin >> Colour;
        cout << "Enter EngineCC: ";
        cin >> EngineCC;
    }

    void output() {
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Colour: " << Colour << endl;
        cout << "EngineCC: " << EngineCC << endl;
    }

    // Operator Overloading for <<
    friend void operator<<(ostream& out, const BIKE& b) {
        out << "Make: " << b.Make << endl;
        out << "Model: " << b.Model << endl;
        out << "Colour: " << b.Colour << endl;
        out << "EngineCC: " << b.EngineCC << endl;
    }
};

int main() {
    BIKE b1;
    b1.input();
    cout << b1; // Operator overloading used here
    return 0;
}