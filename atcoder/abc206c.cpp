// Swappable

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll nC2(ll n){

    ll up, down;
    up = n*(n-1);
    
    return up/2;
}

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    map<ll, ll> A_dict;
    for (int i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        A_dict[tmp]++;
    }

    ll up = nC2(N);
    for (auto p: A_dict){
        up -= nC2(p.second);
    }

    ll ans = up;
    cout << ans << endl;

    return 0;
}