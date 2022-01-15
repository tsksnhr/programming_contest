#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a.at(i);
    }

    ll ans = 0;
    for (int i = 0; i < n-1; i++){
        ans += a.at(i+1) - a.at(i);
    }

    cout << fixed << setprecision(5);
    cout << ans/(double)(n-1) << endl; 
    return 0;
}