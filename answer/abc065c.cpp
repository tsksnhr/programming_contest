#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){

    ll N, M;
    cin >> N >> M;

    ll dif = abs(N - M);
    if (dif > 1){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    for (ll i = 1; i <= N; i++) ans = (ans*i)%MOD;
    for (ll i = 1; i <= M; i++) ans = (ans*i)%MOD;
    
    if (N == M) ans = (ans*2)%MOD;

    cout << ans << endl;
    return 0;
}