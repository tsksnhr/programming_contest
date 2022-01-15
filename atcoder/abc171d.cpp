// hadn't get AC yet...

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    map<int, int> dict;
    map<int, int> dict_sum;
    for (int i=0; i<N; i++){
        int temp;
        cin >> temp;
        dict[temp]++;
    }
    ll sum = 0;
    for (auto p: dict){
        auto key = p.first;
        auto value = p.second;
        dict_sum[key] = value*key;
        sum += value*key;
    }

    int Q;
    cin >> Q;
    vector<ll> ans(Q);
    for (int i=0; i<Q; i++){
        int b, c;
        cin >> b >> c;
        dict[c] += dict[b];
        ll mem = dict[b]; 
        dict[b] = 0;
        sum -= dict_sum[b];
        sum += c*(dict[c]-mem);
        ans.at(i) = sum;
    }

    for (auto x: ans) cout << x << endl;
    return 0;
}