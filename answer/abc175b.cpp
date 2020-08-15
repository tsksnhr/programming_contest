#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){

    int N;
    cin >> N;
    vector<ull> L(N);
    for(int i=0; i<N; i++) cin >> L.at(i);

    ull a = 0, b = 0, c = 0, cnt = 0;
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                a = L.at(i);
                b = L.at(j);
                c = L.at(k);

                if ((a+b > c) && (b+c > a) && (c+a > b) && (L.at(i) != L.at(j)) && (L.at(j) != L.at(k)) && (L.at(k) != L.at(i))){
//                    cerr << i+1 << " " << j+1 << " " << k+1 << endl;
//                    cerr << L.at(i) << " " << L.at(j) << " " << L.at(k) << endl;
//                    cerr << a << " " << b << " " << c << endl;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}