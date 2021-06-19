// Binary Search
// ALDS1_4_D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool binary_search(ll key, vector<ll> &array){

    int left = 0;
    int right = array.size();
    int mid = left + (right - left)/2;

    while (left < right){

        if (array.at(mid) == key){
//            printf("%d %d %d\n", left, mid, right);
//            printf("%d\n", array.at(mid));
            return true;
        }
        else if (array.at(mid) > key){
            right = mid;
        }
        else{
            left = mid + 1;
        }

        mid = left + (right - left)/2;
    }

    return false;
}

int main(){

    int N;
    cin >> N;
    vector<ll> S(N);
    for (int i = 0; i < N; i++) scanf("%d", &S.at(i));
    int Q;
    cin >> Q;
    vector<ll> T(Q);
    for (int i = 0; i < Q; i++) scanf("%d", &T.at(i));

    ll cnt = 0;
    for (int j = 0; j < Q; j++){
        ll key = T.at(j);
        if (binary_search(key, S)) cnt++;
    }

    cout << cnt << endl;
    return 0;
}