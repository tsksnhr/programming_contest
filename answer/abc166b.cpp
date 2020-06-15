#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, K, d;
    cin >> N >> K;
    vector<int> flg(N);
    int i, j, count=0, temp;

    for (i=0; i<K; i++){
        cin >> d;
//        vector<int> array(d);

        for (j=0; j<d; j++){
            cin >> temp;
            flg.at(temp-1) = 1;
        }
    }

    for (int i=0; i<N; i++){
        if (flg.at(i) == 0){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}