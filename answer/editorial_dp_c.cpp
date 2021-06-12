// Vacation

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N+10);
    vector<ll> B(N+10);
    vector<ll> C(N+10);
    vector<vector<ll>> abc(N+10, vector<ll>(3, 0));
    for (ll i = 0; i < N; i++){
        for (ll j = 0; j < 3; j++){
            cin >> abc.at(i).at(j);
        }
    }

    vector<vector<ll>> dp(N+10, vector<ll>(3, 0));

    for (ll i = 0; i < N; i++){
        for (ll j = 0; j < 3; j++){
            for (ll k = 0; k < 3; k++){
                if (j == k) continue;
                dp.at(i+1).at(j) = max(dp.at(i+1).at(j), dp.at(i).at(k) + abc.at(i).at(k)); 
            }
        }
    }

    ll ans = 0;
    for (ll i = 0; i < 3; i++) ans = max(ans, dp.at(N).at(i));

    cout << ans << endl;
    return 0;
}
