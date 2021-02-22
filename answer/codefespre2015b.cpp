#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, M;
    cin >> N >> M;
    map<ll, ll> students_ans_dict;
    
    for (ll i = 0; i < N; i++){
        ll buf;
        cin >> buf;

        students_ans_dict[buf]++;
    }

    for (auto p: students_ans_dict){
        auto score = p.first;
        auto people = p.second;

        if (people > N/2){
            cout << score << endl;
            return 0;
        }
    }

    cout << '?' << endl;
    return 0;
}