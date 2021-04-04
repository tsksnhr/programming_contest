#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;

    bool ans = true;
    bool buffer_flg = false;
    ll rock_cnt = 0;
    ll way_cnt = 0;

    for (ll i = A-1; i < C; i++){
        char tmp = S.at(i);

        if (tmp == '#'){
            rock_cnt++;
            way_cnt = 0;
        }
        else{
            way_cnt++;
            rock_cnt = 0;
        }

        if (rock_cnt == 2){
            cout << "No" << endl;
            return 0;
        }
    }

    rock_cnt = 0;
    way_cnt = 0;
    ll left = B-1, right = D;
    if (C > D){
        left--;
        right++;
    }

    for (ll i = left; i < right; i++){
        char tmp = S.at(i);

        if (tmp == '#'){
            rock_cnt++;
            way_cnt = 0;
        }
        else{
            way_cnt++;
            rock_cnt = 0;
        }

        if (rock_cnt == 2){
            cout << "No" << endl;
            return 0;
        }
        if (way_cnt >= 3){
            buffer_flg = true;
        }
    }

    if (C > D){
        if (buffer_flg){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    else{
        cout << "Yes" << endl;
        return 0;
    }
}