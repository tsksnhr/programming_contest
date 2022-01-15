#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N; 
    cin >> N;

    vector<ll> a(N);
    vector<ll> b(N);
    for (ll i = 0;i < N; i++){
        cin >> a.at(i) >> b.at(i);
    }

    ll ans = 0;
    for (ll i = N-1; i >= 0; i--){
        a.at(i) += ans;

        ll div, mod, dif;
        div = a.at(i)/b.at(i);
        mod = a.at(i)%b.at(i);

        if (mod == 0) continue;
        else{
            dif = b.at(i)*(div + 1) - a.at(i);
            ans += dif;
            }
    }

    cout << ans << endl;
    return 0;
}