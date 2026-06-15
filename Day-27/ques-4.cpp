#include<iostream>
using namespace std ;
int main () {
    string name ;
    int m1 , m2 , m3 , total ;
    float percentage ;
    cout << "Enter Student name  : " ;
    getline(cin , name ) ;
    cout << "Enter marks of 3 subjects : " ;
    cin >> m1 >> m2 >> m3 ;
    total = m1 + m2 + m3 ;
    percentage = total / 3.0 ;
    cout << "\n--- Marksheet ---\n " ;
    cout << " Name : " << name << endl ;
    cout << "Total marks : " << total << endl ;
    cout << "percentage : " << percentage << "%" << endl;
    if (percentage >= 40) {
        cout << "Result : Pass " ;
    }
    else {cout << "Result : Fail " ;
    }
    return 0 ;
}