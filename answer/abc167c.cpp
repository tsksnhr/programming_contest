#include <bits/stdc++.h>
using namespace std;

long long N, M, X;
vector<vector<long long>> A(15, vector<long long>(15));

int main(){
    
    cin >> N >> M >> X;

    for (int i=0; i<N; i++){
        for (int j=0; j<M+1; j++){
            cin >> A.at(i).at(j);
        }
    }

    long long price = 1e9, price_tmp = 0;
    vector<long long> skills(15);
    bool OK = false, flg = false;

    for (int tmp=0; tmp<(1<<N); tmp++){
        bitset<12> bits(tmp);
//        cout << "tmp = " << tmp << endl;

        price_tmp = 0;
        for (int j=1; j<M+1; j++){
            skills.at(j) = 0;
        }

        for (int i=0; i<N; i++){
            if (bits.test(i)){
                price_tmp += A.at(i).at(0);
                for (int j=1; j<M+1; j++){
                    skills.at(j) += A.at(i).at(j);
                }
            }
        }

        flg = true;

        for (int j=1; j<M+1; j++){
            if (skills.at(j) < X){
                flg = false;
                break;
            }
        }

//        cout << "price_tmp = " << price_tmp << endl;

        if (flg){
            price = min(price, price_tmp);
            OK = true;
        }
    }

    if (OK){
        cout << price << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}