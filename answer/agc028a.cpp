#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;

    ll tmp = __gcd(N, M);
    ll L = (N*M)/tmp;
    
    vector<char> X(L, '*');
    vector<bool> flg(L, false);
    ll s_aim = L/N;
    ll t_aim = L/M;
    ll s_cnt = 0, t_cnt = 0;

    for (s_cnt; s_cnt < S.size(); s_cnt++){
        flg.at(s_cnt*s_aim) = true;
    }
    cerr << "test" << endl;
    for (t_cnt; t_cnt < T.size(); t_cnt++){
        bool tmp = flg.at(t_cnt*t_aim);
        if ((tmp == true) && (S.at((t_cnt*t_aim)/s_aim) != T.at(t_cnt))){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << L << endl;
    return 0;
}