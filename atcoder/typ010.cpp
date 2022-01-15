// Score Sum Queries (star_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> cumulative_sum_first(N+1, 0);
    vector<ll> cumulative_sum_second(N+1, 0);
    for (int i = 1; i < N+1; i++){
        int c, p;
        cin >> c >> p;
        if (c == 1){
            cumulative_sum_first.at(i) = p + cumulative_sum_first.at(i-1);
            cumulative_sum_second.at(i) = 0 + cumulative_sum_second.at(i-1);
        }
        else{
            cumulative_sum_first.at(i) = 0 + cumulative_sum_first.at(i-1);
            cumulative_sum_second.at(i) = p + cumulative_sum_second.at(i-1);
        }
    }

    int Q;
    cin >> Q;
    vector<pair <int, int>> ans(Q);
    for (int i = 0; i < Q; i++){
        int l, r;
        cin >> l >> r;
        ans.at(i).first = cumulative_sum_first.at(r) - cumulative_sum_first.at(l-1);
        ans.at(i).second = cumulative_sum_second.at(r) - cumulative_sum_second.at(l-1);
    }

    for (int i = 0; i < Q; i++){
        cout << ans.at(i).first << " " << ans.at(i).second << endl;
    }

    return 0;
}