// KAIBUBsyo

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

int main(){
    
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    vector<ll> B(N);
    B = A;
    reverse(B.begin(), B.end());
    if (A == B){
        cout << 0 << endl;
        return 0;
    }
    
    vector<ll> dif(N);
    map<ll, ll> dif_dict;
    for (ll i = 0; i < N; i++){
        if (A.at(i) != B.at(i)) dif_dict[A.at(i)]++;
    }

    ll total = 0;
    for (auto p: dif_dict){
        total++;
    }
    for (auto p: dif_dict){
        dif_dict.count();
    }

    ll ans = total/2;
    if (N%2 == 0) ans++;
    cout << ans << endl;

    return 0;
}