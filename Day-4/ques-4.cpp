#include<iostream>
using namespace std ;
int main() {
    int n, temp , d, sum = 0, start , end ;
    cout<< " Enter the starting number : ";
    cin >> start ;
    cout << " Enter the ending number : ";
    cin >> end ;
    for ( n = start ; n <= end ; n++ )
    {
        sum = 0 ;
        temp = n ;
        while ( temp > 0 )
        {
            d = temp % 10 ;
            sum = sum + (d * d * d) ;
            temp = temp / 10 ;
        }
        if ( sum == n )
        {
            cout << n << " " ;
        }
    }
    return 0 ;
}