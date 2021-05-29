// We Used to Sing a Song Together (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);
    for (ll i = 0; i < N; i++) cin >> B.at(i);

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = 0;
    for (ll i = 0; i < N; i++){
        ans += abs(A.at(i) - B.at(i));
    }

    cout << ans << endl;

    return 0;
}