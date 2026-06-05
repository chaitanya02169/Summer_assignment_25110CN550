#include<iostream>
using namespace std ;
int main () {
    int  n , largest = 1 , i , j ,count =0 ;
    cout << " Enter a number : " ;
    cin >> n ;
    for ( i = 2 ; i <= n ; i++ ){
        if ( n % i == 0 ){
            count = 0 ;
            for ( j = 1 ; j <= i ; j++ ){
                if ( i % j == 0 ){
                    count++ ;
                }
            }
            if ( count == 2 ){
                largest = i ;
            }
        }
    }
        cout << " Largest prime factor of " << n << " is : " << largest ;
        return 0 ;
    }