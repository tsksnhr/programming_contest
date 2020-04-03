#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, i, ans_num, ans_count, key, value;
    cin >> N;

    map<int, int> m;
    vector<int> a(N);

    for (i=0; i<N; i++){
        cin >> a.at(i);
        m[a.at(i)] += 1;                            // 出現数をカウント(mapのkeyを数値に、valueを出現数とする)
    }

    ans_num = 0;
    ans_count = 0;

    for (pair<int, int> x: m){                      // mapの範囲for文
        key = x.first;
        value = x.second;

        if (value > ans_count){                     // 今回の数値の出現数が前回の数値の出現数より大きい場合、値を更新
            ans_num = key;
            ans_count = value;
        }
    }

    cout << ans_num << ' ' << ans_count << endl;    //　値を出力

    return 0;
}