#include<iostream> 
using namespace std ;
int main () {
    int x, n , ans = 1 ;
    cout << " Enter a number : " ;
    cin >> x >> n ;
    for ( int i = 1 ; i <= n ; i++ ) {
        ans = ans * x ;
    }
    cout << " The answer is : " << ans ;
    return 0 ;
}