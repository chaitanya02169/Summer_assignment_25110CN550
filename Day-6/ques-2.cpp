#include<iostream>
using namespace std ;
int main () {
    int d, decimal = 0 , base = 1 ,binary ;
    cout << " Enter a binary number : " ;
    cin >> binary ;
    while ( binary > 0 ) {
        d = binary % 10 ;
        decimal = decimal + d * base ;
        binary = binary / 10 ;
        base = base * 2 ;
    }
    cout << " Decimal equivalent : " << decimal ;
return 0 ;
}