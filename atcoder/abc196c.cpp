#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    ll digit = 0;
    ll tmp = N;
    while (tmp != 0){
        tmp /= 10;
        digit++;
    }
    ll half_digit = digit;
    half_digit /= 2;

    ll N_half_digit = N;
    for (ll i  = 0; i < half_digit; i++){
        N_half_digit /= 10;
    }
//    cerr << N_half_digit << endl;

    ll ans = 0;
    for (ll i = 1; i <= N_half_digit; i++){
        string tmp, buf;
        ll target;
        tmp = to_string(i);
        buf = tmp;
//        reverse(buf.begin(), buf.end());
        tmp += buf;
        target = stoll(tmp);
//        cerr << i << " " << target << endl;

        if (target > N) break;
        else ans++;
    }

    cout << ans << endl;
    return 0;
}