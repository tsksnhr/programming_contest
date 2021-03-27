#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll n;
    cin >> n;
    vector<string> str_data(n);
    for (ll i = 0; i < n; i++) cin >> str_data.at(i);

    map<char, ll> ch_data; 
    map<char, ll> ch_data_buf;
    for (ll i = 0; i < str_data.at(0).size(); i++) ch_data[str_data.at(0).at(i)]++;

    for (ll i = 1; i < n; i++){
        string ref = str_data.at(i);
        ch_data_buf = ch_data;
        ch_data.clear();

        for (ll j = 0; j < ref.size(); j++){
            for (auto p: ch_data_buf){
                if (p.first == ref.at(j)){
                    if (p.second != 0){
                        ch_data[p.first]++;
                        ch_data_buf[p.first]--;
                    }
                }
            }
        }
    }

    string ans = "";
    for (auto p: ch_data){
        for (ll i = 0; i < p.second; i++) ans += p.first;   
    }

    cout << ans << endl;
    return 0;
}