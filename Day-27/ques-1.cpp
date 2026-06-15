#include<iostream>
using namespace std ;
int main () {
    int roll ;
    string name ;
    float marks ;
    cout << " Enter roll number : " ;
    cin >> roll ;
    cin.ignore() ;
    cout << "Enter Name : " ;
    getline(cin , name ) ;
    cout << "Enter  marks : " ;
    cin >> marks ;
    cout << " \n--- Student Record ---\n " ;
    cout << "Roll Number : " << roll << endl ;
    cout << " Name : " << name << endl ;
    cout << " Marks : " << marks << endl ;
    return 0 ;
}