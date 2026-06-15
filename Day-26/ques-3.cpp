#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    cout << "===== ATM MENU =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Current Balance: Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Updated Balance: Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if(amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance: Rs. " << balance;
            }
            else {
                cout << "Insufficient Balance!";
            }
            break;

        case 4:
            cout << "Thank you for using ATM.";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}