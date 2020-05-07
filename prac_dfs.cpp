#include <bits/stdc++.h>
using namespace std;

bool dfs(int count, int sum);

int n, k;
vector<int> a(20);  // あり得る最大数で配列を確保しておけばグローバル変数で配列が利用できる

int main(){

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a.at(i);
    }
    cin >> k;

    //  dfsで合計==kであればYes、そうでなければNo
    if ( dfs(0, 0) ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}

//  再帰関数は呼び出しが止まった時点で後ろから処理される　→スタックの考え方
bool dfs(int count, int sum){

    //  状態が最後まで到達したら合計が閾値と同じか確認
    if (count == n){
        return k == sum;
    }

    //  count番目の数値を合計に足さない場合
    if ( dfs(count+1, sum) ){
        return true;
    }

    //  count番目の数値を合計に足す場合
    if ( dfs(count+1, sum+a.at(count)) ){
        return true;
    }

    //  合計値が閾値と一致しない場合
    return false;
}