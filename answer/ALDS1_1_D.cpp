// Maximum Profit

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LOW_INF = -1*1e10;

int main(){

    ll N;
    cin >> N;
    vector<ll> R(N);
    for (ll i = 0; i < N; i++) cin >> R.at(i);

    ll ans_high = 0, ans_low = LOW_INF, buf = 0;
    bool is_up = false;
    for (ll i = 0; i < N-1; i++){
        ll dif = R.at(i+1) - R.at(i);

        if (dif < 0) ans_low = max(ans_low, dif);
        else{
            is_up = true;
            if (buf < 0) buf = 0;
        }
        buf += dif;
        ans_high = max(ans_high, buf);
    }

    if (is_up) cout << ans_high;
    else cout << ans_low;
    cout << endl;

    return 0;
}
