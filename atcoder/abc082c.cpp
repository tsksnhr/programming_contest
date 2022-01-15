#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    map<ll, ll> A;
    for (ll i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        A[tmp]++;
    }

    ll ans = 0;
    for (auto p: A){
        if (p.first < p.second) ans += p.second - p.first;
        else if (p.first > p.second) ans += p.second;
        else continue;
    }

    cout << ans << endl;
    return 0;
}