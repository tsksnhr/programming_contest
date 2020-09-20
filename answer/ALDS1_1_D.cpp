#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(int n, vector<ll> &a, ll &ans){

    ll max_dif = (ll)(1e9*-1);
    ll min_cost = a.at(0);

    for( int i = 1; i < n; ++i){
        max_dif = max(max_dif, a.at(i)-min_cost);
        min_cost = min(min_cost, a.at(i));
    }
    ans = max_dif;

    return; 
}

int main(){

    int n;
    cin >> n;
    vector<ll> a(n);
    for( int i = 0; i < n; ++i){
        cin >> a.at(i);
    }

    ll ans{};
    solver(n, a, ans);

    cout << ans << endl;
    return 0;
}
