#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> cnt_vec;

int main(){

    cin >> n >> x;
    int i, j, k, sum = 0, cnt = 0;

    while ((n != 0) || (x != 0)) {
        for (i=1; i<=n; i++){
            for (j=i+1; j<=n; j++){
                for (k=j+1; k<=n; k++){
                    sum = i + j + k;
                    if (sum == x){
//                        cout << i << j << k << endl;
                        cnt++;
                    }
                }
            }
        }
        cnt_vec.push_back(cnt);
        cin >> n >> x;
        cnt = 0;
    }

    for (int x:cnt_vec){
        cout << x << endl;
    }

    return 0;
}