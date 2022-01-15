#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> ab_rule;
    for (int i = 0; i < M; i++){
        pair<int, int> P;
        cin >> P.first >> P.second;
        ab_rule.push_back(P);
    }

    int K;
    cin >> K;
    vector<pair<int, int>> cd_rule;
    for (int i = 0; i < K; i++){
        pair<int, int> P;
        cin >> P.first >> P.second;
        cd_rule.push_back(P);
    }

    ll ans = 0;
    for (int bit = 0; bit < (1 << K); bit++){
        ll ans_buf = 0;
        bitset<20> ball_pattern(bit);
        map<int, int> utilized_pattern;

        for (int i = 0; i < K; i++){
//            cerr << "cd_rule.at(i): " << cd_rule.at(i).first << " " << cd_rule.at(i).second << endl;
            if (ball_pattern.test(i)) utilized_pattern[cd_rule.at(i).second]++;
            else utilized_pattern[cd_rule.at(i).first]++;
        }
//        cerr << ball_pattern << endl;
//        for (auto P: utilized_pattern) cerr << "map: " << P.first << " " << P.second << endl;

        for (int j = 0; j < M; j++){
            if ((utilized_pattern.count(ab_rule.at(j).first)) && (utilized_pattern.count(ab_rule.at(j).second))){
//                cerr << "ab_rule: " << ab_rule.at(j).first << " " << ab_rule.at(j).second << endl;
                ans_buf++;
            }
        }
//        cerr << "ans_buf = " << ans_buf << endl;
        ans = max(ans, ans_buf);
        utilized_pattern.clear();
    }

    cout << ans << endl;
    return 0;
}