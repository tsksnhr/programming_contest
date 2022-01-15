#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    string S;
    cin >> N >> S;

    map<char, ll> right_direction;
    for (ll i = 0; i < N; i++){
        char ch = S.at(i);
        right_direction[ch]++;
    }

    map<char, ll> left_direciton;
    ll ans = 1e6;
    for (ll i = 0; i < N; i++){
        char ch = S.at(i);
        ll buf = 0;
        right_direction[ch]--;

        buf = left_direciton['W'] + right_direction['E'];
        ans = min(ans, buf);

        left_direciton[ch]++;
    }

    cout << ans << endl;
    return 0;
}