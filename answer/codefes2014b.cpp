#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    ll mod = N%20;
    ll div = N/20;

    ll ans = 0;
    if (div%2 == 0){
        if (mod == 0) ans = 1;
        else ans = mod;
    }
    else{
        if (mod == 0) ans = 20;
        else ans = (20+1)-mod;
    }

    cout << ans << endl;
    return 0;
}