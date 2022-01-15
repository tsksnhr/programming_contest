#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    map<char, ll> name_list;
    for (ll i = 0; i < N; i++){
        string tmp;
        cin >> tmp;
        char ch = tmp.at(0);
        if ((ch == 'M') || (ch == 'A') || (ch == 'R') || (ch == 'C') || (ch == 'H')) name_list[ch]++; 
    }

    vector<ll> march_cnt;
    for (auto p: name_list) march_cnt.push_back(p.second);

    ll ans = 0;
    for (ll i = 0; i < march_cnt.size(); i++){
        for (ll j = i+1; j < march_cnt.size(); j++){
            for (ll k = j+1; k < march_cnt.size(); k++){
                ans += march_cnt.at(i)*march_cnt.at(j)*march_cnt.at(k);
//                ans /= 6;
            }
        }
    }

    cout << ans << endl;
    return 0;
}