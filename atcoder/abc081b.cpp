#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    bool flg = true;
    int cnt = 0;
    while (flg){

        for (int i=0; i<N; i++){
            if ((A.at(i))%2 != 0) flg = false;
        }
        if (flg == false) break;

        for (int i=0; i<N; i++){
            A.at(i) = A.at(i) >> 1;
//            A.at(i) /= 2;
        }
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}