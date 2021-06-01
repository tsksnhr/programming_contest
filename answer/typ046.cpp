// I Love 46 (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    map<ll, ll> A;
    map<ll, ll> B;
    map<ll, ll> C;
    for (ll i = 0; i < N; i++){
        ll a;
        cin >> a;
        a %= 46;
        A[a]++;
    }
    for (ll i = 0; i < N; i++){
        ll b;
        cin >> b;
        b %= 46;
        B[b]++;
    }
    for (ll i = 0; i < N; i++){
        ll c;
        cin >> c;
        c %= 46;
        C[c]++;
    }

    ll ans = 0;
    for (auto p: A){
        for (auto q: B){
            for (auto r: C){
                ll sum = p.first + q.first + r.first;

                if (sum%46 == 0) ans += p.second*q.second*r.second;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}