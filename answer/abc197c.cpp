#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// TODO: solve
// How to: bit-search

int main(){

    ll N;
    cin >> N;
    vector<ull> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    ull ans = 1e18;
    for (ll tmp = 0; tmp < (1 << N-1); tmp++){
        bitset<31> separater(tmp);
        ull bit_or = 0;
        ull bit_xor = 0;

        for (ll cnt = 0; cnt < N; cnt++){
            bit_or |= A.at(cnt);
            
            if ((cnt < N-1) && (separater.test(cnt))){
                bit_xor ^= bit_or;
                bit_or = 0;
            }
        }
        bit_xor ^= bit_or;
        
        ans = min(ans, bit_xor);
    }

    cout << ans << endl;
    return 0;
}