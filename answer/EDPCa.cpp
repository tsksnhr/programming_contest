#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> height(N);
    for (ll i = 0; i < N; i++){
        cin >> height.at(i);
    }

    vector<ll> dp(N, 1e6);
    dp.at(0) = 0;
    dp.at(1) = abs(height.at(1) - height.at(0));
    for (ll i = 2; i < N; i++){
        ll tmp1, tmp2, dp_tmp;
        tmp1 = abs(height.at(i) - height.at(i-1));
        tmp2 = abs(height.at(i) - height.at(i-2));
        dp.at(i) = min(tmp1 + dp.at(i-1), tmp2 + dp.at(i-2));
    }
    /*
    for (auto x: dp) cerr << x << " ";
    cerr << endl;
    */

    cout << dp.at(N-1) << endl;
    return 0;
}