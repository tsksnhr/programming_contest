#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int sw_num, lb_num;
    cin >> sw_num >> lb_num;

    vector<vector<int>> sw_pattern(lb_num);
    vector<int> p(lb_num);
    
    for (int i = 0; i < lb_num; i++){
        int k;
        cin >> k;
        for (int j = 0; j < k; j++){
            int tmp;
            cin >> tmp;
            sw_pattern.at(i).push_back(tmp);
        }
    }
    for (int i = 0; i < lb_num; i++) cin >> p.at(i);

    int ans = 0;
    for (int bit_pattern = 0; bit_pattern < (1 << sw_num); bit_pattern++){
        bool flg = true;
        for (int i = 0; i < lb_num; i++){
            int cnt = 0;
            int tmp = bit_pattern;
            for (int x: sw_pattern.at(i)){
                if ((tmp >> (x - 1)) & 1) cnt++;
            }
            cnt %= 2;
            cerr << "i: " << i << " cnt: " << cnt << endl;
            if (cnt != p.at(i)) flg = false;
        }
        if (flg) {
            ans++;
            cerr << "bit_pattern: " << bit_pattern << endl;
        }
    }

    cout << ans << endl;
    return 0;
}