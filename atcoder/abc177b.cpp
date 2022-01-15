#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(string &s, string &t, int &ans){

    int s_size_num, t_size_num;
    s_size_num = s.size();
    t_size_num = t.size();

    int cnt{};
    int ans_buf = 1e5;
    for(int i = 0; i != s_size_num-t_size_num+1; ++i){
        for(int j = 0; j != t_size_num; ++j){
            if(s.at(i+j) != t.at(j)) ++cnt;
        }
        ans_buf = min(ans_buf, cnt);
        cnt = 0;
    }
    ans = ans_buf;

    return;
}

int main(){

    string s, t;
    cin >> s >> t;

    int ans;
    solver(s, t, ans);

    cout << ans << endl;

    return 0;
}
