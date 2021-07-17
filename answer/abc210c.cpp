// Colorful Candies

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    
    ll N, K;
    cin >> N >> K;
    vector<ll> C(N);
    for (ll i = 0; i < N; i++) cin >> C.at(i);

    map<ll, ll> color_dict;
    ll ans = 0;
    for (ll i = 0; i < N; i++){

        if (i < K){
            color_dict[C.at(i)]++;
            ans = color_dict.size();
        }
        else{
            color_dict[C.at(i - K)]--;
            color_dict[C.at(i)]++;
            if (color_dict[C.at(i - K)] == 0) color_dict.erase(C.at(i - K));

            ll buf = color_dict.size();
            ans = max(ans, buf);
        }
    }
    
    cout << ans << endl;
    return 0;
}