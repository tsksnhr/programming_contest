// not solved...

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    string s;
    cin >> N >> s;

    map<ll, ll> color_dict;
    for (ll i = 0; i < N; i++){
        color_dict[s.at(i)]++;
    }

    ll R_count = 0;
    for (ll i = 0; i < color_dict['W']; i++){
        ll pos = N-1-i;

        if (s.at(pos) == 'R') R_count++;
    }

    ll ans = R_count;

    cout << ans << endl;
    return 0;
}