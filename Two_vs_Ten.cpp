#include<iostream>
#define ll long long int
using namespace std;

int solve(ll x){
    if(x < 10 && x % 5 == 0)
        return 1;
    else if(x % 5 == 0){
        if(x % 10 == 5)
            return 1;
        else if(x % 10 == 0)
            return 0;    
    }
    else
        return -1;
}

int main() {
    int t; cin >> t;
    while(t--){
        ll x; cin >> x;
        cout << solve(x) <<"\n";
    }
    return 0;
}
