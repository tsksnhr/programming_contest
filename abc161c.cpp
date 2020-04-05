#include <bits/stdc++.h>
using namespace std;

int main(void){

    int64_t n;
    int64_t k;
    cin >> n >> k;

    int64_t ans0;
    int64_t ans1;
    int64_t div;
    int64_t i;

    // そのままループさせたらTLEになることはわかってただけヨシ！　紙に式を書いたらわかったはずだからヨシ！
    div = n/k;

    ans0 = n - k*div;           // 必ず正
    ans1 = abs(n - k*(div+1));  // 負値なので絶対値を取る

    cout << min(ans0, ans1) << endl;

    return 0;
}