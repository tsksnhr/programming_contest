// Stair Jump (Stsr_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){

    ll N, K;
    cin >> N >> K;

    vector<ll> dp(N+1);
    dp.at(0) = 1;
    for (ll i = 1; i <= N; i++){
        if (i < K) dp.at(i) = dp.at(i-1);
        else {
            dp.at(i) = dp.at(i-1) + dp.at(i-K);
            dp.at(i)%= MOD;
        }
    }

    cout << dp.back() << endl;
    return 0;
}
