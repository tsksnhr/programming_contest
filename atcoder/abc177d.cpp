#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, int M, vector<P> &AB, int &ans){

    vector<vector<int>> friends(N);
    for(int i = 0; i != M; ++i){
        friends.at(AB.at(i).first).push_back(AB.at(i).second);
        friends.at(AB.at(i).second).push_back(AB.at(i).first);
    }


}

int main(){

    int N, M;
    cin >> N >> M;
    vector<P> AB(N);
    for(int i = 0; i != M; ++i) cin >> AB.at(i).first >> AB.at(i).second;

    int ans;
    solver(N, M, AB, ans); 
}
