#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(ll N, ll &ans){

}

int main(){

    ll N;
    cin >> N;

    ll ans = 0;
    for (ll i = 1; i < N; i++){
        ll j = N - i;
        if ((i > 0) && (j > 0)) ans++;
    }

    cout << ans << endl;
    return 0;
}