#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N;
    cin >> N;

    int i, diff_t, sum_xy, diff_sum_xy, mod_xy, mod_xy_a, flg;

    flg = 0;
    diff_t = 0;
    sum_xy = 0;
    diff_sum_xy = 0;
    mod_xy = 0;

    vector<int> t(N);
    vector<int> x(N);
    vector<int> y(N);

    for (i=0; i<N; i++){
        cin >> t.at(i) >> x.at(i) >> y.at(i);
        sum_xy = x.at(i) + y.at(i);                     // 最短移動距離
        mod_xy = (t.at(i) - sum_xy)%2;                  // 遠回りしてある点まで戻れるか

        if (i==0){
            if ((mod_xy == 0) && (sum_xy<=t.at(i))){
                continue;
            }
            else{
                flg = 1;
//                break;
            }
        }
        else{
            diff_t = t.at(i) - t.at(i-1);                                   // 前回時刻からの移動時間
            diff_sum_xy = (x.at(i) - x.at(i-1)) + (y.at(i) - y.at(i-1));    // 前回地点からの最短距離
            mod_xy_a = (diff_t - diff_sum_xy)%2;                            // 遠回りして戻ってこれるか
            if ((mod_xy_a == 0) && (diff_sum_xy <= diff_t)){
                continue;
            }
            else{
                flg = 1;
//                break;
            }
        }
    }

    if (flg==1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;
}