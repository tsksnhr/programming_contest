#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    int i;
    int ans = 0;

    vector<int> height(N);
    for (i=0; i<N; i++){
        cin >> height.at(i);
    }
    vector<int> flg(N);
    for (i=0; i<N; i++){
        flg.at(i) = 1;
    }

    int A, B;
    for (i=0; i<M; i++){
        cin >> A >> B;

        if (height.at(A-1) >= height.at(B-1)){
            flg.at(B-1) = 0;
        }
        if (height.at(A-1) <= height.at(B-1)){
            flg.at(A-1) = 0;
        }
    }

    for (i=0; i<N; i++){
        if (flg.at(i) == 1){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}