#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

  vector<int> X(N);
    int64_t ans, ans_min=100000000;

//    cin >> N;
    for (int i=0; i<N; i++){
        cin >> X.at(i);
    }

    for (int i=1; i<=100; i++){
        ans = 0;
        for (int j=0; j<N; j++){
            ans += (X.at(j) - i)*(X.at(j) - i);
        }
        if (ans < ans_min){
            ans_min = ans;
        }
    }

    cout << ans_min << endl;
    return 0;
}