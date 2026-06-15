#include<iostream>
using namespace std ;
int main () {
    char str [100] ;
    int i ;
    cout << " Enter a string : " ;
    cin >> str ;
    for ( i = 0 ; str[i] != '\0' ; i++) {

    }
    cout << " Reversed string : " ;
    for(i = i - 1 ; i >= 0 ; i--){
        cout << str[i] ;
    }
    return 0 ;
}