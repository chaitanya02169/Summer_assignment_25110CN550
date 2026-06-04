#include<iostream>
using namespace std;
int main(){
    int n ,i , count = 0 ;
    cout << " Enter the number to be checked : ";
    cin >> n ;
    for(i = 1; i < n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 1){
        cout << " The number is prime" ;
    }
    else{
        cout << " The number is not prime" ;
    }
    return 0;
}