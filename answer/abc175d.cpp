#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){

    ll N, K;
    cin >> N >> K;
    vector<ll> P(N);
    for(int i=0; i<N; i++) cin >> P.at(i);
    vector<ll> C(N);
    for(int i=0; i<N; i++) cin >> C.at(i);
    
    ll score_buf{}, pos_buf{}, cnt_buf{}, pos_mem{};
    ll roop_score_max = -1e15, score_end = -1e15, pos{}, cnt = 1;
    for(int i=0; i<N; i++){
        pos_mem = i;
        pos_buf = i;
//        cout << "i = "s << i << endl;

        bool flg = true;
        while(flg){
            score_buf += C.at(P.at(pos_buf)-1);
            pos_buf = P.at(pos_buf)-1;
            cnt_buf++;
//            score_buf += C.at(pos_buf);
            roop_score_max = max(score_buf, roop_score_max);

            if((pos_buf == pos_mem) || (cnt_buf == K)) flg = false;
        }
        score_end = max(score_buf, score_end);

        if(score_end == score_buf){
            pos = pos_mem;
            cnt = cnt_buf;
        }
        cnt_buf = 0;
        score_buf = 0;
    }

    cerr << "test" << endl;

    ll cnt_roop{}, cnt_mod{};
    ll ans{};
    cnt_roop = K/cnt;
    cnt_mod = K%cnt;

    ans = cnt_roop*score_end;

    score_buf = ans;
    pos_buf = pos;
    for(int i=0; i<cnt_mod; i++){
        score_buf += C.at(P.at(pos_buf)-1);
        pos_buf = P.at(pos_buf)-1;
//        score_buf += C.at(pos_buf);
        ans = max(roop_score_max, score_buf);
    }
    ans = max(roop_score_max, score_buf);

    cerr << "pos = "s << pos << endl;
    cerr << "cnt_roop = "s << cnt_roop << endl;
    cerr << "cnt_mod = "s << cnt_mod << endl;
    cerr << "roop_score_max = "s << roop_score_max << endl;
    cerr << "score_buf = "s << score_buf << endl;
    cerr << "score_end = "s << score_end << endl;

    cout << ans << endl;
    return 0;
}