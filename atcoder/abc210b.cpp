// Bouzu Mekuri

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    
    int N;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N; i++){
        char ch = S.at(i);

        if (ch == '1'){
            if (i%2 == 0){
                cout << "Takahashi" << endl;
                return 0;
            }
            else{
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
}