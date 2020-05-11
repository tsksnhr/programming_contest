#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> height(1e5+5);

int main(){

    int cnt = 0;

    cin >> N >> K;
    for (int i=0; i<N; i++){
        cin >> height.at(i);
    }

    for (int i=0; i<N; i++){
        if (height.at(i) >= K){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}