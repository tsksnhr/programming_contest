#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

// after read editrial

int main(){

    ll N;
    string S;
    cin >> N >> S;

    map<char, ll> ch_data;
    for (ll i = 0; i < N; i++) ch_data[S.at(i)]++;
    
    ll ans = 1;
    for (auto p: ch_data){
        ans *= p.second + 1;
        ans %= MOD;
    }
    ans--;

    cout << ans << endl;
    return 0;
}