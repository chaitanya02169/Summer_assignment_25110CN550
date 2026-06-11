#include<iostream>
using namespace std ;
    int sum ( int a , int b ){
    return a + b ;
}
int main () {
    int a , b ;
    cout << " Enter the two number : ";
    cin >> a >> b ;
    cout << " sum = " << sum(a,b) ;
    return 0;
}