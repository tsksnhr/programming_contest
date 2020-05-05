#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    //  組み合わせ数なのでオーバーフローしないようにする
    map<int64_t, int64_t> ans;

    //  (i+Ai)の条件を満たすものが何個あるかをmapで管理する
    for (int i=0; i<N; i++){
        ans[A.at(i) + (i+1)]++;
    }

    //  最後の答えの値はint型ではオーバーフローする
    int64_t sum = 0;

    //  keyが(j-Aj)となるvalueが、jにおけるi+Ai=j-Ajを満たす組み合わせ
    //  上記をmapから合計すれば、i+Ai=j-Ajを満たす組み合わせが見つかる
    for (int i=0; i<N; i++){
        sum += ans[(i+1) - A.at(i)];
    }

    cout << sum << endl;
    return 0;
}
