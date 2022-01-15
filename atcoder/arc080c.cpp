#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(int N, vector<ll> const &a, bool &flg){

    int cnt_4bynum{}, cnt_odd{};
    for(auto iter = a.begin(); iter != a.end(); ++iter){
        if(*iter%4LL == 0) ++cnt_4bynum;
        else if(*iter%2 != 0) ++cnt_odd;
    }

    int thr = N/2;
    if(cnt_4bynum >= thr) flg = true;
    else{
        if(cnt_4bynum >= cnt_odd) flg = true;
        else flg = false;
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<ll> a(N);
    for(auto iter = a.begin(); iter != a.end(); ++iter) cin >> *iter;

    bool flg = false;
    solver(N, a, flg);

    if(flg) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}
