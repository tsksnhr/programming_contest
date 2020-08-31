#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, vector<ll> &A, ull &ans){

    map<ll, int> dict;
    for(int i = 0; i < N; ++i){
        ++dict[A.at(i)];
    }

    ll rec_1st{}, rec_2nd{}, sqr{};
    for(auto p: dict){
        auto length = p.first;
        auto num = p.second;
        ll buf{};
        
        if(num >= 2){
            if(num >= 4){
                sqr = max(sqr, length);
            }
            buf = rec_1st;
            rec_1st = max(rec_1st, length);

            if(length == rec_1st){
                rec_2nd = buf;
            }
        }
    }

    ans = max(rec_1st*rec_2nd, sqr*sqr);
    return;
}

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    for(int i = 0; i < N; ++i){
        cin >> A.at(i);
    }

    ull ans{};
    solver(N, A, ans);

    cout << ans << endl;
    return 0;
}
