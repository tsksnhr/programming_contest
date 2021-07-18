// Matrix Chain Multiplication

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 1 << 30;

void solver(int N, vector<int> &rc, vector<vector<ll>> &dp){

    for (int dif = 0; dif <= N; dif++){
        for (int pos = 1; pos <= N; pos++){
            if (dif == 0) dp.at(pos).at(pos+dif) = 0;
            if (pos+dif > N) continue;

            for (int middle = pos; middle < pos+dif; middle++){
                ll buf;
                buf = dp.at(pos).at(middle) + dp.at(middle+1).at(pos+dif) + rc.at(pos-1)*rc.at(middle)*rc.at(pos+dif);
                dp.at(pos).at(pos+dif) = min(dp.at(pos).at(pos+dif), buf);
            }
        }
    }
    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> rc;
    for (int i = 0; i < N; i++){
        int row, column;
        cin >> row >> column;

        if (i == 0){
            rc.push_back(row);
            rc.push_back(column);
        }
        else rc.push_back(column);
    }

    vector<vector<ll>> dp(N+1, vector<ll>(N+1, INF));
    solver(N, rc, dp);

    // for (auto x: dp.at(1)) cerr << x << " ";
    // cerr << endl;

    cout << dp.at(1).at(N) << endl;
    return 0;
}