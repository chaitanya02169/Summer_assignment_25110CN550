#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int choice;
    cout << "Enter a string: ";
    getline(cin, str);
    do {
        cout << "\n1. Length\n2. Reverse\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Length = " << str.length();
                break;
            case 2:
                for (int i = str.length() - 1; i >= 0; i--)
                    cout << str[i];
                break;
            case 3:
                cout << str;
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid Choice";
        }
    } while (choice != 4);
    return 0;
}