#include <bits/stdc++.h>
using namespace std;

string S;

int main(){

    cin >> S;

    int size = S.size();
    int i, cnt_tmp = 0, cnt = 0;
    for (i=0; i<size; i++){
        if ((S.at(i) == 'A') || (S.at(i) == 'C') || (S.at(i) == 'G') || (S.at(i) == 'T')){
            cnt_tmp++;
        }
        else{
            cnt_tmp = 0;
        }
        //  この処理をelse内に入れると"AAAAA"などでcntが0のまま更新されない
        cnt = max(cnt, cnt_tmp);
    }

    cout << cnt << endl;
    return 0;
}