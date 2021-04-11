#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(ll N, ll &ans){

    ll a_max = 0, a_min = 1e6, b_max = 0, b_min = 1e6;
    for (ll i = 0; i < N; i++){
        ll a, b;
        cin >> a >> b;

        a_max = max(a, a_max);
        if (a_max == a) b_max = b;

        a_min = min(a, a_min);
        if (a_min == a) b_min = b;
    }

    ll a_dif = 0;
    a_dif = a_max - a_min;
    ans = a_min + a_dif + b_max;

    return;
}

int main(){

    ll N;
    cin >> N;
    
    ll ans = 0;
    solver(N, ans);

    cout << ans << endl;
    return 0;
}