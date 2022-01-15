// 200th ABC-200

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    ll N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++){
        ll mod = N%200;

        if (mod == 0) N /= 200;
        else {
            string str = to_string(N);
            str = str + "200";
            N = stoll(str);
        }
    }

    cout << N << endl;
    return 0;
}