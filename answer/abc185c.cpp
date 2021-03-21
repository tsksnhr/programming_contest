#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll L;
    cin >> L;

    ll a = 1, b = 1;
    vector<bool> flg(12, false);
    for (ll i = L-1; i >= L-11; i--){
        a *= i;

        for (ll j = 1; j <= 11; j++){
            if ((flg.at(j) == false) && (a%j == 0)){
                a /= j;
                flg.at(j) = true;
            }
        }
    }

    ll ans = a;
    cout << ans << endl;
    
    return 0;
}