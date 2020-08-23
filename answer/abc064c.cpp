#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<int, int>;

void solver(int N, vector<int> &a, int &ans_min, int &ans_max){

    int buf{};
    map<int, int> rank;
    
    for(int i = 0; i != N; ++i){
        buf = a.at(i)/400;
        rank[buf]++;
    }

    for(auto p: rank){
        auto color_num = p.first;
        auto people_num = p.second;

        if(color_num > 7){
            ans_max += people_num;

            if(ans_min == 0) ++ans_min;
        }
        else{
            ++ans_max;
            ++ans_min;
        }
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> a(N);
    for(auto iter = a.begin(); iter != a.end(); ++iter) cin >> *iter;

    int ans_min{}, ans_max{};
    solver(N, a, ans_min, ans_max);

    cout << ans_min << " "s << ans_max << endl;
    return 0;
}