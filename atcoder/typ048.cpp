// I will not drop out (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, K;
    cin >> N >> K;
    vector<ll> scores;
    for (ll i = 0; i < N; i++){
        ll a, b, dif;
        cin >> a >> b;
        dif = a - b;
        scores.push_back(dif);
        scores.push_back(b);
    }
    sort(scores.begin(), scores.end());
    reverse(scores.begin(), scores.end());

    ll ans = 0;
    for (ll i = 0; i < K; i++){
        ans += scores.at(i);
    }
    cout << ans << endl;
    
    return 0;
}