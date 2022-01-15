#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long; 

int main(){
    
    ll N;
    cin >> N;

    ll vanish = 0;
    ll base = 2;
    map<ll, ll> divisor;
    while (base*base <= N){
        ull buf = 0;
        for (ll i = 2; buf < N; i++){
            buf = pow(base, i);
            divisor[buf]++;
            if(divisor[buf] == 1){
                vanish++;
//                cerr << buf << endl;
            }

            if (buf*base > N) break;
        }
        base++;
    }

    ll ans = N - vanish;
    cout << ans << endl;
    return 0;
}