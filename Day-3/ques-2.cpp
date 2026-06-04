#include<iostream>
using namespace std;
int main() {
    int start,end,i,j,count ;
    cout << " enter staring number : ";
cin >> start ;
cout << " enter ending number : ";
cin >> end;
cout << " prime numbers are :";
for ( i = start ; i <= end ; i++) {
    count = 0 ;
    for ( j=1 ; j<=i ; j++ ){
        if ( i%j == 0){ 
            count++; 
        }
    }
if ( count == 2 ) {
    cout << i << " " ;
    }
}
return 0 ; 
}