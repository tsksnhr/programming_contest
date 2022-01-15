#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> A(20);
vector<int> m(200);

int main(){

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A.at(i);
    }
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> m.at(i);
    }

    int sum = 0;
    vector<string> ans(200, "no");      //  結果出力用の配列("no"で初期化)
    for (int i=0; i<(1 << n); i++){
        bitset<20> used(i);

        for (int j=0; j<n; j++){
            if (used.test(j)){
                sum += A.at(j);
            }
        }
        /*
        cout << "i = " << i << endl;
        cout << "sum = " << sum << endl;
        */
        for (int k=0; k<q; k++){
            if (m.at(k) == sum){
                ans.at(k) = "yes";      //  条件を満たした時のみ"yes"を出力
            }
        }
        sum = 0;
    }

    for (int i=0; i<q; i++){
        cout << ans.at(i) << endl;
    }
    return 0;
}
