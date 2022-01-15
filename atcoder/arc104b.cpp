#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    string S;
    cin >> N >> S;

    ll a_cnt = 0;
    ll t_cnt = 0;
    ll c_cnt = 0;
    ll g_cnt = 0;
    ll ans = 0;

    for (ll i = 0; i < N; i++){
        char s = S.at(i);
        if (s == 'A') a_cnt++;
        if (s == 'T') t_cnt++;
        if (s == 'C') c_cnt++;
        if (s == 'G') g_cnt++;

        for (ll j = i+1; j < N; j++){
            char t = S.at(j);
            if (t == 'A') a_cnt++;
            if (t == 'T') t_cnt++;
            if (t == 'C') c_cnt++;
            if (t == 'G') g_cnt++;

            if ((a_cnt == t_cnt) && (c_cnt == g_cnt)) ans++;
        }
        a_cnt = 0;
        t_cnt = 0;
        c_cnt = 0;
        g_cnt = 0;
    }

    cout << ans << endl;
    return 0;
}