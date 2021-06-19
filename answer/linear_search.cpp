// Linear Search
// ALDS1_4_A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool linear_search(int key, vector<ll> &array){

    int pos = 0;
    array.push_back(key);
    int size = array.size();

    while(array.at(pos) != key) pos++;

    if (pos == size-1) return false;
    else return true;
}

int main(){

    int N;
    cin >> N;
    vector<ll> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);
    int Q;
    cin >> Q;
    vector<ll> T(Q);
    for (int i = 0; i < Q; i++) cin >> T.at(i);

    ll cnt = 0;
    for (int j = 0; j < Q; j++){
        ll key = T.at(j);
        if (linear_search(key, S)){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}