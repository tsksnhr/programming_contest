#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, K;
    cin >> N >> K;

    vector<int> x(N);
    int ans = 0;
    for (int i=0; i<N; i++){
        cin >> x.at(i);

        int diff_a, diff_b;
        diff_a = x.at(i)*2;
        diff_b = (K - x.at(i))*2;
        ans += min(diff_a, diff_b);
    }

    cout << ans << endl;
    return 0;
}