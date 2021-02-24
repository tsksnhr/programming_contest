#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gpa_checker(char ch){
    if (ch == 'A') return 4;
    else if (ch == 'B') return 3;
    else if (ch == 'C') return 2;
    else if (ch == 'D') return 1;
    else return 0;
}

int main(){

    ll N;
    string S;
    cin >> N >> S;

    ll score_sum = 0;
    for (ll i = 0; i < N; i++){
        score_sum += gpa_checker(S.at(i));
    }

    double ans = (double)score_sum/(double)N;

    cout << fixed << setprecision(10);
    cout << ans << endl;
    return 0;
}