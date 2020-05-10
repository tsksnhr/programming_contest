#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){

    cin >> n >> s;

    int aflg = 0, bflg = 0, cflg = 0, cnt = 0, tmp, flg = 0, num = 0;
    vector<int> ans;
    vector<int> ref(3);

    clock_t start = clock();

    for (int i=0; i<1000; i++){
        ref = {i/100, i/10), i%10};
        num = 0;
        for (int j=0; j<n; j++){
            if ('0' + (ref.at(num)) == s.at(j)){
                num++;
            }
            if (num == 3){
                cnt++;
                break;
            }
        }

    }

    clock_t end = clock();
/*
    for (int x: ans){
        cout << x << endl;
    }
*/

    const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    //printf("time %lf[ms]\n", time);
    cout << time << "ms" << endl;
    cout << cnt << endl;
    return 0;
}

