#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


//  libraly
void prime_factorization(int buf, map<int, int> &divisor){

    int div;
    int thr = sqrt(buf);

    if (buf == 1) {
        divisor[0]++;
        return;
    }
    else {
        for (div=2; div<thr+1; div++){
            while (buf%div == 0){
                buf /= div;
                divisor[div]++;
            }
        }

        if (buf != 1) {
            divisor[buf]++;
        }
    }
    return;
}

int binary_exponentiation(int a, int x){

    if (x == 0) return 1;
    else if (x%2 != 0) return a*binary_exponentiation(a, x-1);
    else return binary_exponentiation(a, x/2)*binary_exponentiation(a, x/2);
}


//  main
int main(){

    int N;
    cin >> N;
    vector<int> A;
    map<int, int> dict_A;

    for (int i=0; i<N; i++){
        int temp;
        cin >> temp;
        dict_A[temp]++;
    }

    int ans = 0;

    for (auto p: dict_A){

        auto key = p.first;
        auto value = p.second;

        map<int, int> divisor;
        if ((key == 1) && (value == 1)){
            cout << 1 << endl;
            return 0;
        }
        else if ((key == 1) && (value != 1)){
            cout << 0 << endl;
            return 0;
        }
        else if (value != 1) continue;
        prime_factorization(key, divisor);

        bool flg = true;
        for (auto q: divisor){
            auto qkey = q.first;
            auto qvalue = q.second;

            for (int i=1; i<=qvalue; i++){
                if (dict_A.count(binary_exponentiation(qkey, i))){
                    if (binary_exponentiation(qkey, i) == key) flg = true;
                    else {
                        flg = false;
                        break;
                    }
                }
            }
            if (flg == false) break;
        }
        if (flg) ans++;
        divisor.clear();
    }

    cout << ans << endl;
    return 0;
}

