#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    ll N, C;
    cin >> N >> C;

    vector<pair<ll, ll>> event;
    for (int i = 0; i < N; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pair<ll, ll> plus(a-1, c);
        pair<ll, ll> minus(b, -c);
        event.push_back(plus);
        event.push_back(minus);
    }

    sort(event.begin(), event.end());

    ll ans = 0, fee = 0, date = 0;
    for (auto x: event){
        if (x.first != date){                       // x.first == dateの時にans=0となることを防ぐ(同じa,bがあると発生する)
            ans += min(C, fee)*(x.first - date);
            date = x.first;
        }
        fee += x.second;
    }

    cout << ans << endl;
    return 0;
}