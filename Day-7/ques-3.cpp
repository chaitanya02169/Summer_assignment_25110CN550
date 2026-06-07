#include<iostream>
using namespace std ;
int sumofdigits( int n ) {
    if ( n == 0 ) {
        return 0 ;
    }
    else { 
        return n % 10 + sumofdigits ( n/10 ) ;
    }
    }
    int main () {
    int n ;
    cout << " Enter the number : " ;
    cin >> n ;
    cout << " sum of digits in the given number is : " << sumofdigits ( n) ;
    return 0 ;
    }
