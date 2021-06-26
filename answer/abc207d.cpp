// 

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<pair<ll, ll>> S(N);
    vector<pair<ll, ll>> T(N);
    for (int i = 0; i < N; i++) cin >> S.at(i).first >> S.at(i).second;
    for (int i = 0; i < N; i++) cin >> T.at(i).first >> T.at(i).second;

    bool is_OK = true;
    vector<pair<ll, ll>> S_buf(N);
    for (int i = 0; i < N; i++){
        S_buf = S;
        
        int a, b, c, d, cnt;
        a = S_buf.at(i).first;
        b = S_buf.at(i).second;

        for (int j = 0; j < N; j++){
            cnt = 0;
            c = T.at(j).first;
            d = T.at(j).second;

            if (a*c > 0) a *= -1;
            int x_dif = abs(a) - abs(c);
            if (a*c > 0) S_buf.at(j).first *= -1;
            S_buf.at(j).first += x_dif;

            int y_dif = abs(b) - abs(d);
            S_buf.at(j).second += y_dif;

            for (int k = 0; k < N; k++){
                if (k == j) continue;
                if (a*c > 0) S_buf.at(k).first *= -1;
                S_buf.at(k).first += x_dif;
                S_buf.at(k).second += y_dif;
            }

            for (int l = 0; l < N; l++){
                if ((S_buf.at(l).first + T.at(l).first == 0) && (S_buf.at(l).second == T.at(l).second)) cnt++;
            }
            if (cnt == N){
                is_OK = false;
                break;
            }
        }
        if (!is_OK) break;
    }

    if (is_OK) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}