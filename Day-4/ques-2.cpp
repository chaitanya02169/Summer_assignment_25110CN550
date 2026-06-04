# include<iostream>
using namespace std ;
int main() {
    int n, a=0 ,b=1 ,c ,i ;
    cout << " Enter the position :";
    cin >> n ;
    if ( n == 1){
        cout << " Nth fibonacci term = "<< a;
    }
    else if ( n==2 ){
        cout << " Nth fibonacci term = " << b ;
    }
    else {
        for( i=3; i <=n ; i++){
            c = a + b ;
            a = b ;
            b = c ;
        }
    cout << " Nth fibonacci term = " << b ;
}
return 0 ;
}
