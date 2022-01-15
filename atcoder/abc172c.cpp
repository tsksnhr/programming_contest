#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){

    int N, M;
    ll K;
    cin >> N >> M >> K;

    vector<ll> A(N);
    vector<ll> B(M);

    for(int i=0; i<N; i++) cin >> A.at(i);
    for(int i=0; i<M; i++) cin >> B.at(i);

    ll ans = 0, a_sum = 0, b_sum = 0, cnt = 0, B_best = 0;

    for(int i=0; i<M; i++) b_sum += B.at(i);
//    cout << b_sum << endl;
//    if(b_sum<=K) ans = M;

    for(int i=-1; i<N; i++){
        if(i>=0) a_sum += A.at(i);
//        cnt = 0;
        while(a_sum+b_sum>K){
            if(cnt >= M) break;
//            cout << a_sum+b_sum << endl;
            b_sum -= B.at(M-1-cnt);
            cnt++;
        }
//        cout << cnt << " " << b_sum << " " << endl;
        ll temp = (i+1)+(M-cnt);
        if(a_sum+b_sum<=K) ans = max(ans, temp);
    }
    
    cout << ans << endl;
    return 0;
}