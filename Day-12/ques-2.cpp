#include<iostream>
using namespace std ;
int  armstrong(int n ){
int temp = n , d , sum = 0 ;
while( temp != 0 ){
    d = temp % 10;
    sum += d*d*d ;
    temp = temp / 10 ;
}
return sum ;
}
int main () {
    int num ;
    cout << " Enter a number : " ;
    cin >> num ;
    if ( num == armstrong(num)) {
        cout << " Armstrong number " ;
    }
    else {
        cout << " Not a armstrong number " ;
    }
    return 0 ;
}