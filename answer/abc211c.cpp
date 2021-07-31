// chokudai
// solved after reading editorial

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll MOD = 1e9 + 7; 

int main(){

    string s;
    cin >> s;
    int N = s.size();
    s = "_" + s;
    string ref = "_chokudai";

    vector<vector<ll>> dp(N+5, vector<ll>(10, 1));
    for (int i = 0; i <= N; i++){
        for (int j = 0; j <= 8; j++){
            if (j == 0) dp.at(i).at(j) = 1;
            else if (i == 0) dp.at(i).at(j) = 0;
            else if (s.at(i) == ref.at(j)){
                dp.at(i).at(j) = dp.at(i-1).at(j) + dp.at(i-1).at(j-1);
            }
            else{
                dp.at(i).at(j) = dp.at(i-1).at(j);
            }

            dp.at(i).at(j) %= MOD;
        }
    }

    cout << dp.at(N).at(8) << endl;
    return 0;
}