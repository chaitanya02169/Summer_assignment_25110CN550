#include<iostream>
#include<string>
using namespace std ;
int main () {
    int empID ;
    string name ;
    float basic , hra , da , gross ;
    cout << "Enter employee ID : " ;
    cin >> empID ;
    cin.ignore() ;
    cout << "Enter Employee name : " ;
    getline(cin, name ) ;
    cout << " Enter Basic salary : " ;
    cin >> basic ;
    hra = basic * 0.20 ;
    da = basic * 0.10 ;
    gross = basic + hra + da ;
    cout << " \n--- Salary Details ---\n" ;
cout << " Employee ID : " << empID << endl ;
cout << "Name :" << name << endl ;
cout << "Basic Salary : " << basic << endl ;
cout << "Gross Salary : " << gross << endl ;
return 0 ;
}