#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(ll N, ll T, vector<ll> &t, ll &ans){

    for(int i = 0; i != N-1; ++i){
        ll t_dif = t.at(i+1) - t.at(i);
        
        if(t_dif <= T) ans += t_dif;
        else ans += T;
    }
    ans += T;

    return;
}

int main(){

    ll N, T;
    cin >> N >> T;
    vector<ll> t(N);
    for(auto iter = t.begin(); iter != t.end(); ++iter) cin >> *iter; 

    ll ans{};
    solver(N, T, t, ans);

    cout << ans << endl;

    return 0;
}