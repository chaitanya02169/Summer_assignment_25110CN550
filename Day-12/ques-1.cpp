#include<iostream>
using namespace std ;
int  palindrome(int n ) {
    int rev = 0 , temp = n ;
    while ( temp > 0 ) {
        rev = rev * 10 + temp % 10 ;
        temp = temp / 10 ;
    }
    return rev ;
}
int main () {
    int num ;
    cout << " Enter a number : " ;
    cin >> num ;
    if ( num == palindrome(num)) {
        cout << " Palindrome number " ;
    }
    else {
        cout << " Not a palindrome number " ;
    }
    return 0 ;
}