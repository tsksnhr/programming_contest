// 	Cooking

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> T(N);
    for (ll i = 0; i < N; i++) cin >> T.at(i);

    ll sum = 0;
    for (auto x: T) sum += x;

    vector<ll> dp(N);
    ll remain = 0;
    for (ll i = 1; i < N; i++){
        
    }    
}