#include<iostream>
#define ll long long int
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n,win; cin >> n;
        ll a[n], d[n], arr[(2*n)];
        for(int i=0; i<n; i++){
            cin >> a[i];
            arr[i] = arr[n+i] = a[i];
        }
        for(int i=0; i<n; i++){
            cin >> d[i];
            if(d[i] > (arr[n+i] + arr[n-i]))
                win = i;
            else{
                cout << -1 <<"\n";
                return 0;
        	}
                 
        }
        cout << d[win] <<"\n";
    }
    return 0;
}
