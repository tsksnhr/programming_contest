#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(int N, int K, map<int, int> const &A_dict, int &ans){

    int cnt{};
    vector<int> ball_num;
    for(auto p: A_dict){
        auto value = p.second;
        ++cnt;
        ball_num.push_back(value);
    }

    sort(ball_num.begin(), ball_num.end());

    int dif = cnt - K;
    if(dif <= 0) ans = 0;
    else{
        for(int i = 0; i != dif; ++i){
            ans += ball_num.at(i);
        }
    }

    return;
}

int main(){

    int N, K;
    cin >> N >> K;
    map<int, int> A_dict;
    for(int i = 0; i != N; ++i){
        int buf;
        cin >> buf;
        ++A_dict[buf];
    }

    int ans{};
    solver(N, K, A_dict, ans);

    cout << ans << endl;
    return 0;
}