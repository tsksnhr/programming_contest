#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N; 
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    ll ans = A.at(0);
    for (ll i = 1; i < N; i++){
        ans = __gcd(ans, A.at(i));
    }

    cout << ans << endl;
    return 0;
}