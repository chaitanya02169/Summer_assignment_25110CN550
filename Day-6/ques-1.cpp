#include<iostream>
using namespace std ;
int main () {
    int n , a[32] , i=0 , j , rem ;
    cout << " Enter a number : " ;
    cin >> n ;
    while ( n > 0 ) {
        rem = n % 2 ;
        a[i] = rem ;
        n = n / 2 ;
         i++ ;
       
    }
    cout << " Binary equivalent : " ;
    for ( j = i - 1 ; j >= 0 ; j-- ) {
        cout << a[j] ;
    }
    return 0 ;
}