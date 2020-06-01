#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    int ans = 0;
    int cnt = 0;

    for (int i=1; i<N+1; i++){
        
        int temp = i;
        int cnt_buf = 0;

        while(temp != 0){
//            cout << i/2 << endl;
            if (temp%2==0) cnt_buf++;
            temp /= 2;
//            cout << i << endl;
        }
        if (cnt < cnt_buf) {
            cnt = cnt_buf;
            ans = i;
        }
    }

    if (cnt != 0) cout << ans << endl;
    else cout << 1 << endl;
    return 0;
}