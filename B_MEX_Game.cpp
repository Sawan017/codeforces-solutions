#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k , n , x , b , count0 = 0,count1 = 0,count2 = 0,count3 = 0 , yes = 0;
    cin >> x;
    for(int i = 0 ; i < x ; i++){
        cin >> n >> k;
        vector<int> arr(n);
         for(int j = 0 ; j < n ;j++){
            cin >> arr[j];
         }
            for( int l = 0 ; l < n ; l++){
                if( arr[l] == 0){
                    count0++; 
                }
                else if( arr[l] == 1){
                    count1++; 
                }
                else if( arr[l] == 2){
                    count2++; 
                }
                else if( arr[l] == 3){
                    count3++; 
                    
                }
                 if ( count0 < k ) {
                cout << "YES" << "" << endl;
                yes++;
            }
            else if ( count1 < k ) {
                cout << "YES" << "" << endl;
                yes++;
            }
            else if ( count2 < k ) {
                cout << "YES" << "" << endl;
                yes++;
            }
            else if ( count3 < k ) {
                cout << "YES" << "" << endl;
                yes++;
            }
            else if ( yes >= 2){
                cout << "NO";
            }
            else {
                cout << "NO";
            }

                
                    }
                   
            
         

         
    }

   
}