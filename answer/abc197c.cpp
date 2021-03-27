#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// TODO: solve
// How to: bit-search

int main(){

    ll N;
    cin >> N;
    vector<ull> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    ull ans = 0;
    vector<ll> bit_cnt(30, 0);
    for (ll i = 0; i < N; i++){
        bitset<30> tmp(A.at(i));

        for (ll j = 0; j < 30; j++){
            if (tmp.test(j)) bit_cnt.at(j)++;
        }
    }
    for (auto x: bit_cnt) cerr << x << " ";
    cerr << endl;

    for (ll i = 0; i < 30; i++){
        if (bit_cnt.at(i) == 1) ans += (pow(2, i));
    }

    cout << ans << endl;
    return 0;
}