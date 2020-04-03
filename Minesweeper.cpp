#include <bits/stdc++.h>
using namespace std;

int main(void){

    int i, h, w;
    int H,W;
    cin >> H >> W;

    string S[H];
    
    for (i=0; i<H; i++){
        cin >> S[i];
    }

    for (h=0; h<H; h++){
        for (w=0; w<W; w++){
            if (S[h].at(w) == '.'){
                S[h].at(w) = '0';
            }
        }
    }

    for (i=0; i<H; i++){
        cout << S[i] << endl;
    }

}