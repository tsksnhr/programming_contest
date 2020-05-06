#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, K, M;
    cin >> N >> K >> M;

    int thr;
    int diff;
    int sum = 0;

    thr = M*N;

    for (int i=0; i<N-1; i++){
        int temp;
        cin >> temp;
        sum += temp;
    }

    diff = thr - sum;
    
    if ((diff <= K)){
        if (diff<0){
            cout << 0 << endl;
        }
        else{
        cout << diff << endl;
        }
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}