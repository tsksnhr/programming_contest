#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, M;
    cin >> N >> M;

    ll dif = N - M;
    ll short_time = (N - M)*100;
    ll long_time = pow(2, M)*(1900*M);
    ll ans = long_time + (short_time)*pow(2, M);

    cout << ans << endl;
    return 0;
}