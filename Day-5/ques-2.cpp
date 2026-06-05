#include<iostream>
using namespace std ;
int main() {
    int n , temp , d, sum =0 , fact  , i;
    cout << " Enter a number : " ;
    cin >> n ;
    temp = n ;
    while ( temp > 0 )
    { 
        d = temp % 10 ;
        fact = 1 ;
        for ( i =1 ; i<= d ; i++ ){
            fact = fact*i ;
        }
        sum = sum + fact ;
        temp = temp / 10 ;
    }
    if ( sum == n ){
        cout << n << " is a strong number" ;
    }
    else { 
        cout << n << " is not a strong number " ;
    }
    return 0 ;
}