#include<iostream>
using namespace std;
int main(){
    int n , i ;
    cout << " enter a  number:" ;
cin >> n ;
int sum  = 0;
for (  i=1; i<=n  ; i++){
sum += i ;
}
cout<< "sum of first "<< n<<" natural numbers = " << sum << endl;
return 0 ;
}