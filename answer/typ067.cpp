// Base 8 to 9 (star_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string N;
    int K;
    cin >> N >> K;

    string s_buf = N;
    for (int i = 0; i < K; i++){
        ll buf = stoll(s_buf, nullptr, 8);
        s_buf = "";

        vector<ll> base9;
        ll cnt = 0;
        while (true){
            ll mod;
            mod = buf%9;
            base9.push_back(mod);
            buf /= 9;
            cnt++;

            if (buf == 0) break;
        }
        
        for (ll i = base9.size()-1; i >= 0; i--){
            if (base9.at(i) == 8) base9.at(i) = 5;
            s_buf += to_string(base9.at(i));
        }
    }

    cout << s_buf << endl;
    return 0;
}