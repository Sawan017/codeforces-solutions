#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b , c ,d = 0;
    cin >> a;
    
    for(int i= 0; i < a ; i++){
        cin>> b;
        vector<int> arr(b);
       if( b != 1){
        for(int j = 0; j < b ; j++){
            cin>> arr[j];
            
        }
        for(int j = 0; j < b-1 ; j++){
            
            if( j % 2 == 0){
                d = arr[j] - arr[j+1];
                arr[j+1] = d;
            }
            else{
                d = arr[j] + arr[j+1];
                arr[j+1] = d;
            }
        }
        cout<< d << "" << endl;
        d = 0;
    }
    else{
        cin>> arr[0];
        cout<< arr[0] << "" << endl;
    }
}
}
