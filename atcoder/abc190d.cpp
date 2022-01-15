#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    while (N%2 == 0){
        N /= 2;
    }

    ll ans = 0;
    ll last_idx = 0;
    // 整数でなくなるsqrt()を使わないために i*i<=N の比較を実施
    for (ll i = 1; i*i <= N; i++){
        if (N%i == 0) ans += 2;
        last_idx = i;
    }

    // i*i == Nだった場合、約数の数は+1するべきなので、for文で加算した数からデクリメントする
    // 理由: dでNが割り切れる時の約数はそれぞれd, d/Nだが上記の際は両者が等しくなるため
    if (last_idx*last_idx == N) ans--;

    // 2N = x*yの問題を解いてるため、Nが奇数でも解答は2倍しなければならない
    cout << ans*2 << endl;
    return 0;
}