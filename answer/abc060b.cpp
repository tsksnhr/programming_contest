#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<int, int>;

void solver(int A, int B, int C, bool &flg){

    int buf{}, cnt = 1;
    map<int, int> div;

    while(true){
        buf = A*cnt;
        buf %= B;
        ++cnt;
        
        if(div[buf] != 0) break;
        else div[buf]++;
    }

    for(auto p: div){
        auto divisor = p.first;
        if(divisor == C) flg = true;
    }

    return;
}

int main(){

    int A, B, C;
    cin >> A >> B >> C;

    bool ans = false;
    solver(A, B, C, ans);

    if(ans) cout << "YES"s << endl;
    else cout << "NO"s << endl;

    return 0;
}