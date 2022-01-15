#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> L(N);
    for (ll i = 0;i < N; i++) cin >> L.at(i);
    sort(L.begin(), L.end());

    ll ans = 0;
    for (ll i = N-1; i >= 0; i--){
        for (ll j = i-1; j >= 0; j--){
            ll target = L.at(i) + L.at(j);

            // if thard-edge is longer than tharget (sum of first- and second-edge), it isn't suitabile for making triangle.
            auto iter = lower_bound(L.begin(), L.end(), target);
            ll ng = distance(iter, L.end());

            // (N - 1 - i) are candidates of third-edge, ng is the number of unsuitable edge.
            // this subtraction calcurates the number of suitable edge.
            ans += (N - 1 - i) - ng;
        }
    }

    cout << ans << endl;
    return 0;
}