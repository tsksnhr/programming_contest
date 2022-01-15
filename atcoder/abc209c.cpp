// Not Equal

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main(){

    int N;
    cin >> N;

    vector<ll> c(N);
    for (int i = 0; i < N; i++) cin >> c.at(i);
    sort(c.begin(), c.end());

    ll ans = 1;
    for (int i = 0; i < N; i++){
        ans *= (c.at(i) - i);
        ans %= MOD;
    }
    if (ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}