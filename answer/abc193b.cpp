#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll N;
    ll A, P, X;
    cin >> N;

    ll ans = 1e9;
    for (ll i = 0; i < N; i++){
        cin >> A >> P >> X;

        ll dif = X - A;
        ll buf = 1e9;
        if (dif > 0) buf = P;
        
        ans = min(ans, buf);
    }
    if (ans == 1e9) ans = -1;

    cout << ans << endl;
    return 0;
}