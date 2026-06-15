#include<iostream>
using namespace std ;
int main () {
    string str  , rev = "" ;
    int i ;
    cout << " Enter a string : " ;
    cin >> str ;
    for( i = str.length() - 1 ; i >= 0 ; i--){
        rev = rev + str[i] ;
    }
    if(str == rev){
        cout << " Palindrome string " ;
    }
    else{
        cout << "Not a palindrome string ";
    }
    return 0 ;
}