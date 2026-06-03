#include<iostream>
using namespace std ;
int main(){
    int i , fact =1 , n ;
    cout << "enter the number for factorial:";
    cin >> n;
    for( i=1; i<=n ; i++){
        fact*=i;
    }
    cout << " factorial of "<<n<<" is : " << fact;
    return 0;
}