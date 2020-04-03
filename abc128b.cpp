#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    int i, N, rank;
    cin >> N;

    vector<tuple<string, int, int>> tp(N);

    for (i=0;i<N; i++){
        cin >> get<0>(tp.at(i)) >> get<1>(tp.at(i));
    }

    for (i=0;i<N; i++){
        get<1>(tp.at(i)) = 100 - get<1>(tp.at(i));  // ソートできるように点数の大小関係を逆転させる
        get<2>(tp.at(i)) = i+1;                     // ページ番号出力用
    }

    sort(tp.begin(), tp.end());                     // ソート

    for (i=0; i<N; i++){
        cout << get<2>(tp.at(i)) << endl;
    }
    
    return 0;
}