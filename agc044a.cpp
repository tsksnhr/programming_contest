#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll num);

ll t, n, a, b, c, d;
map<ll, ll> memo;
ll ans;

int main(){

    cin >> t;

    for (int i=0; i<t; ++i){
        //  条件ごとにmapをクリア
        memo.clear();
        cin >> n >> a >> b >> c >> d;

        //  再帰関数を呼び出し
        ans = solve(n);
        cout << ans << endl;
    }

    return 0;
}

ll solve(ll num){

    ll cost, l2, r2, l3, r3, l5, r5;

    // 再帰を抜ける処理
    if (num == 0) return 0;
    if (num == 1) return d;
    if (memo.count(num)) return memo.at(num);

    // 2, 3, 5で割り切れる数値に移動して商を計算
    // numが2, 3, 5で割り切れる値の場合は、numをそのままl(num), r(num)とする
    l2 = (num/2)*2;
    r2 = ((num+1)/2)*2;
    l3 = (num/3)*3;
    r3 = ((num+2)/3)*3;
    l5 = (num/5)*5;
    r5 = ((num+4)/5)*5;

    //  costをn+dとするとオーバーフローするが、下だとオーバーフローしない
    //  if処理が無い場合、残りのnumに対してすべて操作dを実施したほうが最低コストとなる場合を検討できなくなる
    //  ただしnum*dのオーバーフロー問題があるため、ifを追加してcost>1e18とならないようにしている
    cost = 1e18;
    if (num < cost/d) cost = num*d;

    // コストを計算
    // 割った回数だけa, b, cをコストに加算、割り切れない分はdとして加算
    cost = min(cost, (llabs(num-l2))*d + a + solve(l2/2));
    cost = min(cost, (llabs(num-r2))*d + a + solve(r2/2));
    cost = min(cost, (llabs(num-l3))*d + b + solve(l3/3));
    cost = min(cost, (llabs(num-r3))*d + b + solve(r3/3));
    cost = min(cost, (llabs(num-l5))*d + c + solve(l5/5));
    cost = min(cost, (llabs(num-r5))*d + c + solve(r5/5));

    // 計算したコストをmapに記憶
    memo[num] = cost;

    return cost;
}