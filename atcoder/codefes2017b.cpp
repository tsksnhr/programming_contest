#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, map<ll, ll> &D, int M, map<ll, ll> &T, bool &flg){

    bool tmp = true;

    for(auto p: T){
        auto key = p.first;
        auto value = p.second;

        if(D.count(key)){
            if(D[key] < value) tmp = false;
        }
        else tmp = false;
    }
    flg = tmp;

    return;
}

int main(){

    int N;
    cin >> N;
    map<ll, ll> D;
    for(int i = 0; i != N; ++i){
        int tmp;
        cin >> tmp;
        ++D[tmp];
    }
    int M;
    cin >> M;
    map<ll, ll> T;
    for(int i = 0; i != M; ++i){
        int tmp;
        cin >> tmp;
        ++T[tmp];
    }

    bool flg;
    solver(N, D, M, T, flg);

    if(flg) cout << "YES"s << endl;
    else cout << "NO"s << endl;

    return 0;
}