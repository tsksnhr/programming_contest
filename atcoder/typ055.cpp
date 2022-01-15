// Select5 (star_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){

    ll N, P, Q;
    cin >> N >> P >> Q;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++){
        cin >> A.at(i);
        A.at(i) %= P;
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++){
        for (ll j = i+1; j < N; j++){
            for (ll k = j+1; k < N; k++){
                for (ll l = k+1; l < N; l++){
                    for (ll m = l+1; m < N; m++){
                        ll buf = 1;
                        buf *= A.at(i);
                        buf %= P;
                        buf *= A.at(j);
                        buf %= P;
                        buf *= A.at(k);
                        buf %= P;
                        buf *= A.at(l);
                        buf %= P;
                        buf *= A.at(m);
                        buf %= P;

                        if (buf%P == Q) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}