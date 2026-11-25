// Complete nhi hai complete kro
#include <iostream>
using namespace std;

class ATM {
public:
    ATM(int b){
        balance = b;
    }
    void withdraw(int amount) {
        enterPIN();
        processTransaction(amount,balance);
        dispenseCash();
    }

private:
    int balance;
    void enterPIN() {
        string pin = "1234";  // Sample stored PIN
        string enteredPin;
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
            cout << "PIN verified successfully." << endl;
        else {
            cout << "Incorrect PIN. Try again." << endl;
            return;
        }
    }

    void processTransaction(int amount, float balance) {
        double balance = 5000.0;
        double withdrawAmount;

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;

        if (withdrawAmount > 0 && withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "Transaction successful. Remaining balance: Rs. " << balance << endl;
        } else {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    void dispenseCash() {
        cout << "Please collect your cash. Thank you!" << endl;
    }
};

int main() {
    ATM atm(5000);
    atm.withdraw(500); // Only the abstracted function is called

    return 0;
}