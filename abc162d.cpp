#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    string S;
    cin >> N >> S;

    vector<int> sum_R(N+1); 
    vector<int> sum_G(N+1);
    vector<int> sum_B(N+1);

    int i, j, temp;

    //  累積和  
    for (i=0; i<N; i++){
        if (S.at(i) == 'R'){
            sum_R.at(i+1) = 1 + sum_R.at(i);
            sum_G.at(i+1) = sum_G.at(i);
            sum_B.at(i+1) = sum_B.at(i);
        }
        if (S.at(i) == 'G'){
            sum_R.at(i+1) = sum_R.at(i);
            sum_G.at(i+1) = 1 + sum_G.at(i);
            sum_B.at(i+1) = sum_B.at(i);
        }
        if (S.at(i) == 'B'){
            sum_R.at(i+1) = sum_R.at(i);
            sum_G.at(i+1) = sum_G.at(i);
            sum_B.at(i+1) = 1 + sum_B.at(i);
        }
    }

    int64_t count = 0;  // 組み合わせ数が多くなった場合オーバーフローするので、それを防ぐためにint64_t型を用いる
    int diff = 0;

    for (i=0; i<N; i++){
        for (j=i+1; j<N; j++){
            temp = 0;
            diff = j - i;
            if ( (S.at(i) == 'G' && S.at(j) == 'B') || (S.at(i) == 'B' && S.at(j) == 'G') ){
                temp += (sum_R.at(N) - sum_R.at(j+1));
                if ( ((j+diff)<N) && (S.at(j+diff) == 'R') ){
                    count += temp-1;
                }
                else{
                    count += temp;
                }
            }
            if ( (S.at(i) == 'R' && S.at(j) == 'B') || (S.at(i) == 'B' && S.at(j) == 'R') ){
                temp += (sum_G.at(N) - sum_G.at(j+1));
                if ( ((j+diff)<N) && (S.at(j+diff) == 'G') ){
                    count += temp-1;
                }
                else{
                    count += temp;
                }
            }
            if ( (S.at(i) == 'G' && S.at(j) == 'R') || (S.at(i) == 'R' && S.at(j) == 'G') ){
                temp += (sum_B.at(N) - sum_B.at(j+1));
                if ( ((j+diff)<N) && (S.at(j+diff) == 'B') ){
                    count += temp-1;
                }
                else{
                    count += temp;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}