#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    int a , b;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> a >> b;
        if( a == b){
            cout << a << "" << endl ;
        }
        else if (b <= a && a%2 == b%2){
            cout << a << "" << endl;/* code */
        }
       else if ( b <= a +1){
       cout << a + 1 << "" << endl;
       }
       else 
       {
        cout  << -1 << "" << endl;
       }
       
        
        
        
    }
}