// Maximum Profit

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LOW_INF = -1*1e10;

int main(){

    ll N;
    cin >> N;

    ll R_min;
    cin >> R_min;

    ll ans = LOW_INF;
    for (ll i = 1; i < N; i++){
        ll R_now;
        cin >> R_now;

        ans = max(ans, R_now - R_min);
        R_min = min(R_min, R_now);
    }

    cout << ans << endl;
    return 0;
}
