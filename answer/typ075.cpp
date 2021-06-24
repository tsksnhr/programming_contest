// Magic For Balls (star_3)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    ll cnt = 0;
    for (ll i = 2; i*i <= N; i++){
        while (N%i == 0){
            N /= i;
            cnt++;
        }
//        cerr << i << " " << N << endl;
    }
    if (N > 1 && cnt > 0) cnt++;

    ll ans = 0;
    while (true){
        if (pow(2, ans) >= cnt) break;
        ans++;
    }

    cout << ans << endl;
    return 0;
} 