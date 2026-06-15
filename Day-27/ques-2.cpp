#include<iostream>
using namespace std ;
int main () {
    int empID ;
    string name ;
    float salary ;
    cout << " Enter Employee ID : " ;
    cin >> empID ;
    cin.ignore() ;
    cout << "Enter Employee Name : " ;
    getline(cin , name ) ;
    cout << "Enter  salary : " ;
    cin >> salary ;
    cout << " \n--- Employee Record ---\n " ;
    cout << "Employee ID  : " << empID  << endl ;
    cout << " Employee Name : " << name << endl ;
    cout << " salary : " << salary << endl ;
    return 0 ;
}