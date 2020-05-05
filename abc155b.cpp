#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    //  Aiが偶数ならば、それが3か5で割り切れる　→　入国できないのは偶数が3か5の倍数で無い時のみ！
    int flg = 1;

    for (int i=0; i<N; i++){
        if ((A.at(i))%2 == 0){
            if ((A.at(i))%3 == 0){
                flg = 1;
            }
            else if ((A.at(i))%5 == 0){
                flg = 1;
            }
            else{
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }

    if (flg == 1){
        cout << "APPROVED" << endl;
    }
    else{
        cout << "DENIED" << endl;
    }
    return 0;
}