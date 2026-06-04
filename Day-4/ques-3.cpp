#include<iostream>
using namespace std ;
int main() {
    int n, temp , d, sum = 0 ;
    cout << " Enter the number : ";
    cin >> n ;
    temp = n ;
    while ( temp > 0 )
    {
        d = temp % 10 ;
        sum = sum + (d * d * d) ;
        temp = temp / 10 ;
    }
    if ( sum == n )
    {
        cout << " The number is an armstrong number " ;
    }
    else
    {
        cout << " The number is not an armstrong number " ;
    }
    return 0 ;
}