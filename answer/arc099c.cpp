#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver1(int N, int K, vector<int> &A, int &ans){

    ans = N/K;

    return;
}

int main(){

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(auto iter = A.begin(); iter != A.end(); ++iter) cin >> *iter;

    int ans1;
    solver1(N, K, A, ans1);

    cout << ans1 << endl;

    return 0;
}