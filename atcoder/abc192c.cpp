#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, K;
    cin >> N >> K;

    ll ans = N;
    for (int i = 1; i <= K; i++){
        string left, right;
        left = to_string(ans);
        right = to_string(ans);
        
        sort(left.begin(), left.end(), std::greater<char>());
        sort(right.begin(), right.end());

        ll g1, g2;
        g1 = stoll(left);
        g2 = stoll(right);

        ans = g1 - g2;
    }

    cout << ans << endl;
    return 0;
}