#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



//  main
int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());
    vector<bool> flg(1e6+5, true);
    map<int, int> memo;

    for (auto x: A){
//        cout << x << endl;        // debug
        memo[x]++;
        if (memo[x] != 1){
            flg.at(x) = false;

            if (x == 1){
                cout << 0 << endl;
                return 0;
            }

            continue;
        }
        
        int thr = 1e6;
        int cnt = 2;
        while (x*cnt<=thr){
//            cout << "cnt = " << cnt << endl;      // debug
            flg.at(x*cnt) = false;
            cnt++;
        }
    }

    int ans = 0;
    for (auto x: A){
//        cout << x << endl;        // debug
        if (flg.at(x) == true) ans++;
    }

    cout << ans << endl;
    return 0;
}

