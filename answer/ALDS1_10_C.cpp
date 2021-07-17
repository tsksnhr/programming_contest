// Longest Common Subsequence

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solver(string l_str, string r_str, vector<vector<int>> &dp){

    for (int i = 1; i <= l_str.size(); i++){
        for (int j = 1; j <= r_str.size(); j++){
            if (l_str.at(i-1) == r_str.at(j-1)){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return;
}

int main(){

    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        string l, r;
        cin >> l >> r;
        vector<vector<int>> dp(1003, vector<int>(1003));
        dp.at(0).at(0) = 0;
        
        solver(l, r, dp);
        cout << dp[l.size()][r.size()] << endl;
    }

    return 0;
}