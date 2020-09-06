#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, ll C, ll K, vector<ll> &A, ll &ans){
    
    sort(A.begin(), A.end());           //  到着順にソート

    ll sum{}, st_time = A.at(0);
    for( int i = 0; i < N; ++i ){
        if( A.at(i) > K+st_time ){      //  ==の場合は乗客は待てるので、条件に入れない
            ++ans;
            sum -= C;                   //  乗客の到着間隔が長い場合、バスが満員では無くても出発するので、乗客の数が負値となる場合もある
            if( sum < 0 ){
                sum = 0;
            }
            st_time = A.at(i);
        }
        else if( sum >= C ){
            ++ans;
            sum -= C;
            st_time = A.at(i);          //  理由がどうであれ、先頭の乗客が出発したら待てる時間が延びる
        }
        ++sum;
    }

    if( sum != 0){                      //  if文内で処理されなかった乗客が、残りのバスで行く（時間制限なし）
        if( sum%C == 0 ){
            ans += sum/C;
        }
        else{
            ans += sum/C+1;
        }
    }
    return;
}

int main(){

    int N;
    ll C, K;
    cin >> N >> C >> K;
    vector<ll> A(N);
    for( int i = 0; i < N; ++i){
        cin >> A.at(i);
    }

    ll ans{};
    solver(N, C, K, A, ans);

    cout << ans << endl;
    return 0;
}
