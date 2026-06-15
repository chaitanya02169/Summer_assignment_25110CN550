#include<iostream>
#include<string>
#include<ctime>
using namespace std ;
int main() {
    srand(time(0)) ;
    int secret  = rand() % 100 + 1 ;
    int guess ;
    cout << "====== number guessing game =====" << endl ;
    cout << " Guess a number between 1 and 100 " << endl ;
    do {
        cout << "Enter your guess : " ;
        cin >> guess ; 
    if(guess > secret) {
        cout << "Too high! " << endl ;
    }
    else if( guess < secret) {
        cout << " Too low! " << endl ;
    }
    else {
        cout << " Congratulations! You guess the number. " << endl ;
    }
}
    while ( guess != secret) ;
    return 0 ;
    }
    