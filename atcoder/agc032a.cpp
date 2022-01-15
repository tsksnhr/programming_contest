#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// after read editorial

int main(){

    ll N;
    cin >> N;
    vector<ll> b(N);
    for (ll i = 0; i < N; i++){
        cin >> b.at(i);
        if (b.at(i) > i+1){
            cout << -1 << endl;
            return 0;
        }
    }

    vector<ll> ans;
    while(!b.empty()){
        for (ll i = b.size()-1; i >= 0; i--){
            if (b.at(i) == i+1){
                ans.push_back(b.at(i));
                b.erase(b.begin() + i);
                break;
            }
        }
    }
    reverse(ans.begin(), ans.end());

    for (auto x: ans) cout << x << endl;
    return 0;
}