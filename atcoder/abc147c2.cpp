#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<vector<pair <int, int>>> dataset(N);
    for (int i = 0; i < N; i++){
        int A;
        cin >> A;
        for (int j = 0; j < A; j++){
            pair<int, int> xy;
            cin >> xy.first >> xy.second;
            dataset.at(i).push_back(xy);
        }
    }

    int ans = 0, ans_buf = 0;
    for (int bit_int = 0; bit_int < (1 << N); bit_int++){
        bitset<15> people(bit_int);

        bool  honest_flg = true;
        for (int i = 0; i < N; i++){
            for (auto data: dataset.at(i)){
                auto x = data.first;
                auto y = data.second;
                
                if (people[i] & 1){
                    if (people[x - 1] ^ y){
                        honest_flg = false;
                    }
                }
            }
        }
        if (honest_flg) {
            ans_buf = people.count();
            ans = max(ans, ans_buf);
        }
    }

    cout << ans << endl;
    return 0;
}