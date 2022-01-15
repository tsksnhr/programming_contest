#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(string s, bool &flg){

    map<char, int> dict;
    for(int i = 0; i != (int)s.size(); ++i){
        ++dict[s.at(i)];
    }

    int dif_ab, dif_bc, dif_ca;
    dif_ab = abs(dict['a'] - dict['b']);
    dif_bc = abs(dict['b'] - dict['c']);
    dif_ca = abs(dict['c'] - dict['a']);

    if( (dif_ab >= 2) || (dif_bc >= 2) || (dif_ca >= 2) ){
        flg = false;
    }
    else{
        flg = true;
    }
}

int main(){

    string s;
    cin >> s;

    bool flg;
    solver(s, flg);

    if(flg) cout << "YES"s << endl;
    else cout << "NO"s << endl;

    return 0; 
}