#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(string &s, string &t, bool &flg){

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    bool comp = false;
    int max_loop = min(s.size(), t.size());     //  sよりtが短い場合、s.size()でループを回すとコンパイルエラー
    for(int i = 0; i != max_loop; ++i){
        if(s.at(i) < t.at(i)){
            flg = true;
            comp = true;
            break;
        }
        else if(s.at(i) > t.at(i)){
            flg = false;
            comp = true;
            break;
        }
        else{}
    }

    if(comp == false){
        if(s.size() < t.size()) flg = true;
        else flg = false;
    }

    return;
}

int main(){

    string s, t;
    cin >> s >> t;

    bool flg = false;
    solver(s, t, flg);

    if(flg) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}