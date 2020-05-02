#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    vector<int> ans(N);
    int s, c, i;
    int c1=0, c2=0, c3=0;
    int count1=0, count2=0, count3=0;
    int flg=0;

    for (i=0; i<M; i++){
        cin >> s >> c;

        if ((s == 1) && (c != c1) && (count1 > 0)){
            flg = 1;
        }
        if ((s == 2) && (c != c2) && (count2 > 0)){
            flg = 1;
        }
        if ((s == 3) && (c != c3) && (count3 > 0)){
            flg = 1;
        }

        if ( (s == 1) && (count1 == 0)){
            c1 = c;
            ans.at(s-1) = c1; 
            count1++;
        }
        if ( (s == 2) && (count2 == 0)){
            c2 = c;
            ans.at(s-1) = c2;
            count2++;
        }
        if ( (s == 3) && (count3 == 0)){
            c3 = c;
            ans.at(s-1) = c3;
            count3++;
        }
    }

    if (N>1){
        if (count1 == 0){
            ans.at(0) = 1;
        }
    }

    if ( ( (N>1) && (ans.at(0) == 0) && (M != 0) ) || (flg != 0) ){
        cout << -1 << endl;
    }
    else if (M == 0){
        if (N == 1){
            cout << 0 << endl;
        }
        if (N == 2){
            cout << 10 << endl;
        }
        if (N == 3){
            cout << 100 << endl;
        }
    }
    else{
        for (i=0; i<N; i++){
            cout << ans.at(i);
        }
        cout << endl;
    }

    return 0;
}