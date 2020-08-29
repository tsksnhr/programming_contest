#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int D, int T, int S, bool &ans){

    bool ans_buf;
    if(S*T < D) ans_buf = false;
    else ans_buf = true;

    ans = ans_buf;

    return;
}

int main(){

    int D, T, S;
    cin >> D >> T >> S;

    bool ans;
    solver(D, T, S, ans);

    if(ans) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}
