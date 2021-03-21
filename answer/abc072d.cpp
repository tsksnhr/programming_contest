#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N; 
    cin >> N;
    vector<ll> p(N);
    ll same_cnt = 0;
    for (ll i = 0; i < N; i++){
        cin >> p.at(i);
        ll tmp = i + 1;
        if (p.at(i) == tmp) same_cnt++;
    }

    ll adjacent_cnt = 0;
    for (ll i = 0; i < N; i++){
        bool is_same = false;
        ll tmp = i + 1;
        if (p.at(i) == tmp){
            is_same = true;
            adjacent_cnt++;
        }
        else{
            is_same = false;
            same_cnt -= adjacent_cnt/2;
            adjacent_cnt = 0;
        }

        if ((i == N-1) && (same_cnt > 1)) same_cnt -= adjacent_cnt/2;
    }

    cout << same_cnt << endl;
    return 0;
}