#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    int count = 0;
    if (N>=K){
        for (int i=N-1; count<K; i--){
            A.at(i) = 0;
            count++;
        }
    }
    else{
        for (int i=0; i<N; i++){
            A.at(i) = 0;
        }
    }

    int64_t ans = 0;
    for (int i=0; i<N; i++){
        ans += A.at(i);
    }

    cout << ans << endl;
    return 0;
}