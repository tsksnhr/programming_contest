#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, i, count, flg;
    cin >> N;

    count = 0;
    flg = 0;

    vector<int> vec(N);

    for (i=0; i<N; i++){
        cin >> vec.at(i);
    }

    while(flg == 0){
        for (i=0; i<N; i++){

            if (vec.at(i)%2 != 0){
                flg = 1;
                break;
            }

            vec.at(i) /= 2;      
        }
        if (flg == 0){
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}