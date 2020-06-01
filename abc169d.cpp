#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll N;
    cin >> N;

    ll buf = N;
    map<ll, ll> divisor;
    ll div = 2;

    if (buf == 1) divisor[0] = 1;
    else{
        while (buf != 1){
            while (buf%div == 0){
                buf /= div;
                divisor[div-1]++;
            }
            div++;
        }
    }

    ll ans = 0;
    for (auto p: divisor){
        auto value = p.second;

        int sub = 1;
        while (value != 0){
            value -= sub;
            sub++;
            ans++;
            
            if (sub > value) break; 
        }
    }

    cout << ans << endl;
    return 0;
}