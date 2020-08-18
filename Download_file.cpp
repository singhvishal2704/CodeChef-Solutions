#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n,k, cost=0; cin >> n >> k;
        for(int i=0; i<n; i++){
            int a,b; cin >> a >> b;
            if(a < k){
                k = k - a;
            }
            else{
                cost = cost + (a - k)*b;
                k = 0;
            }
            
        }

        

        cout << cost << "\n";
    }
    return 0;
}
