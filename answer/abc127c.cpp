#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    //  分かりにくい変数名はよろしくない
    int ltemp, rtemp, l = 0, r = 1e6;
    for (int i=0; i<M; i++){
        cin >> ltemp >> rtemp;
        l = max(l, ltemp);
        r = min(r, rtemp);

        if (r < l){
            cout << 0 << endl;
            return 0;
        }
    }

    int ans = r - l + 1;

    cout << ans << endl;
    return 0;
}       