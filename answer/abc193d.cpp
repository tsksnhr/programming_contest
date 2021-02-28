#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ctoi(char buf){
    if (buf == '0') return 0;
    if (buf == '1') return 1;
    if (buf == '2') return 2;
    if (buf == '3') return 3;
    if (buf == '4') return 4;
    if (buf == '5') return 5;
    if (buf == '6') return 6;
    if (buf == '7') return 7;
    if (buf == '8') return 8;
    if (buf == '9') return 9;
}

int main(){
    
    ll K;
    string takahashi, aoki;
    cin >> K >> takahashi >> aoki;

    vector<ll> remaining_card(10, K);
    vector<ll> takahashi_card(10, 0);
    vector<ll> aoki_card(10, 0);
    ll base_takahashi_score = 0, base_aoki_score = 0;

    for (ll i = 0; i < 4; i++){
        ll buf = ctoi(takahashi.at(i));
        takahashi_card.at(buf)++;
        remaining_card.at(buf)--;
    }
    for (ll i = 0; i < 10; i++){
        base_takahashi_score += pow(10, takahashi_card.at(i))*i;
    }

    for (ll i = 0; i < 4; i++){
        ll buf = ctoi(aoki.at(i));
        aoki_card.at(buf)++;
        remaining_card.at(buf)--;
    }
    for (ll i = 0; i < 10; i++){
        base_aoki_score += pow(10, aoki_card.at(i))*i;
    }
//    cerr << base_takahashi_score << " " << base_aoki_score << endl;

    ll winnable = 0;
    for (ll i = 1; i < 10; i++){
        if (remaining_card.at(i) == 0) continue;
        remaining_card.at(i)--;

        for (ll j = 1; j < 10; j++){
            if (remaining_card.at(j) == 0) continue;
//            cerr << i << " " << j << endl;

            ll takahashi_score = base_takahashi_score;
            ll aoki_score = base_aoki_score;
//            cerr << takahashi_score << " " << aoki_score << endl;

            takahashi_card.at(i)++;
            if (takahashi_card.at(i) != 1){
                takahashi_score -= pow(10, takahashi_card.at(i-1))*i;
            }
            takahashi_score += pow(10, takahashi_card.at(i))*i;
            takahashi_card.at(i)--;

            aoki_card.at(j)++;
            if (aoki_card.at(j) != 1){
                aoki_score -= pow(10, aoki_card.at(j-1))*j;
            }
            aoki_score += pow(10, aoki_card.at(j))*j;
            aoki_card.at(j)--;

//            cerr << takahashi_score << " " << aoki_score << endl;
            if (takahashi_score > aoki_score){
                winnable++;
                cerr << i << " " << j << endl;
            }
        }
    }
//    cerr << winnable << endl;
    double ans = 0;
    ans = (double)winnable/(double)((9*K - 8)*(9*K - 9));

    cout << fixed << setprecision(10);
    cout << ans << endl;
    return 0;
}