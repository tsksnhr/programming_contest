// Vacation

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> C(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i) >> B.at(i) >> C.at(i);

    vector<vector<ll>> dp(N, vector<ll>(3, 0));

    dp.at(0).at(0) = A.at(0);
    dp.at(0).at(1) = B.at(0);
    dp.at(0).at(2) = C.at(0);

    for (ll i = 1; i < N; i++){
        dp.at(i).at(0) = max(dp.at(i-1).at(1) + A.at(i), dp.at(i-1).at(2) + A.at(i));
        dp.at(i).at(1) = max(dp.at(i-1).at(0) + B.at(i), dp.at(i-1).at(2) + B.at(i));
        dp.at(i).at(2) = max(dp.at(i-1).at(0) + C.at(i), dp.at(i-1).at(1) + C.at(i));
    }

    ll ans = 0;
    ans = max(dp.back().at(0), max(dp.back().at(1), dp.back().at(2)));

    cout << ans << endl;
    return 0;
}
