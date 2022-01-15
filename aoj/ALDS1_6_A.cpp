// Counting Sort

#include <bits/stdc++.h>

using namespace  std;
using ll = long long;

ll A_in[2000007];
ll A_out[2000007];
ll cnt[2000007];

void countingsort(ll key, ll size){

    for (int i = 0; i <= key; i++){
        cnt[i] = 0;
    }
    for (int i = 0; i < size; i++){
        cnt[A_in[i]]++;
    }
    for (int i = 1; i <= key; i++){
        cnt[i] += cnt[i-1];
    }

    for (int i = size-1; i >= 0; i--){
        A_out[cnt[A_in[i]]] = A_in[i];
        cnt[A_in[i]]--;
    }

    return;
}

int main(){

    ll N;
    cin >> N;
    ll max_num = 0;
    for (ll i = 0; i < N; i++){
        cin >> A_in[i];
        max_num = max(max_num, A_in[i]);
    }

    countingsort(max_num, N);

    for (ll i = 1; i <= N; i++){
        if (i != 1) cout << " ";
        cout << A_out[i];
    }
    cout << endl;

    return 0;
}