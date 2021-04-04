#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> a(N);
    ll sum = 0;
    for (ll i = 0; i < N; i++){
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());

    vector<ll> a_sum(N);
    a_sum.at(0) = a.at(0);
    for (ll i = 1; i < N; i++){
        a_sum.at(i) += a_sum.at(i-1) + a.at(i);
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++){
        ans += (a_sum.at(N-1) - a_sum.at(i)) - (N-1-i)*a.at(i);
    }

    cout << ans << endl;
    return 0;
}