#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(string const &S, string const &ref, bool &flg){

    int cnt = 0, pos = 0;
    for(int i = 0; i != S.size(); ++i){
        if(pos == ref.size()) break;
        if(S.at(i) != ref.at(pos)) break;
        ++cnt;
        ++pos;
    }
    pos = ref.size() - 1;
    for(int i = S.size()-1; i != -1; --i){
        if(pos == 0) break;
        if(S.at(i) != ref.at(pos)) break;
        ++cnt;
        --pos;
    }

    if(cnt >= ref.size()) flg = true;

    return;
}

int main(){

    string S;
    cin >> S;

    string ref = "keyence";

    bool flg = false;
    solver(S, ref, flg);

    if(flg) cout << "YES"s << endl;
    else cout << "NO"s << endl;

    return 0;
}