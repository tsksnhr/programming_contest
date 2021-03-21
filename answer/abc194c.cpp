#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A_vec(N);
    map<ll, ll> A_map;
    for (ll i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        A_vec.at(i) = tmp;;
        A_map[tmp]++;
    }    

    ll ans = 0;
    ll cnt_1st = 0, cnt_2nd = 0; 
    for (auto p: A_map){
        cnt_1st++;

        for (auto q: A_map){
            cnt_2nd++;
            if (cnt_2nd <= cnt_1st) continue;

            ll dif = p.first - q.first;
            ll buf = (dif*dif)*(p.second*q.second);
            ans += buf;
        }
        cnt_2nd = 0;
    }

    cout << ans << endl;
    return 0;
}