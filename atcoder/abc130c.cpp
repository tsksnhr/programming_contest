//  2分割した面積の小さいほうの最大値は、全面積の半分(長方形に切らなくてもいいので、必ずこうなる切り方がある)
//  指定の点が中心でない場合、線の引き方は一意に定まる

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    double w, h, x, y;
    cin >> w >> h >> x >> y;

    double ans = (w*h)/2.0;
    bool flg = (2.0*x == w) && (2.0*y == h);

    cout << fixed << setprecision(10);
    cout << ans << " " << flg << endl;
    return 0;
}