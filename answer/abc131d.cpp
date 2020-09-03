#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, map<ll, ll> &ab, bool &flg){

    ll t_limit{}, t_done{};
    for(auto p: ab){
        auto b = p.first;
        auto a = p.second;

        t_limit = b;
        t_done += a;

        if(t_limit < t_done){
            flg = false;
        }
    }
    return;
}

int main(){

    int N;
    cin >> N;
    map<ll, ll> ab;
    for(int i=0; i<N; ++i){
        ll a,b;
        cin >> a >> b;
        ab[b] += a;
    }

    bool flg = true;
    solver(N, ab, flg);

    if(flg){
        cout << "Yes"s << endl;
    }
    else{
        cout << "No"s << endl;
    }
    return 0;
}
