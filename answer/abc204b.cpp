//

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    ll ans = 0;
    for (ll i = 0; i < N; i++){
        ll tmp = A.at(i);
        if (tmp <= 10) continue;
        else ans += (tmp - 10);
    }

    cout << ans << endl;

    return 0;
}