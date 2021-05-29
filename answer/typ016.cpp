// Minimum Coins (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, A, B, C;
    cin >> N >> A >> B >> C;

    ll left, middle, right;
    left = min(A, min(B, C));
    right = max(A, max(B, C));
    middle = (A + B + C) - (left + right); 

    ll div_right = N/right;
    ll mod_right = N%right;
    ll ans = 1e5;
    if (mod_right == 0){
        ans = div_right;
        cout << ans << endl;
        return 0;
    }
    
    for (ll i = div_right; i >= 0; i--){
        if (i != div_right) mod_right += right;

        ll div_middle, mod_middle;

        div_middle = mod_right/middle;
        mod_middle = mod_right%middle;

        for (ll j = div_middle; j >= 0; j--){
            if (j != div_middle) mod_middle += middle;

            ll div_left, mod_left;
            
            div_left = mod_middle/left;
            mod_left = mod_middle%left;

            if (mod_left == 0){
                ll tmp = i + j + div_left;
                ans = min(ans, tmp);
            }
        }
    }

    cout << ans << endl;
    return 0;
}