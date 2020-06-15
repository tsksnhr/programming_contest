#include <bits/stdc++.h>
using namespace std;

int main(){

    int H, N;
    cin >> H >> N;

    int A = 0, temp = 0;
    for (int i=0; i<N; i++){
        cin >> temp;
        A += temp;
    }

    if (A >= H){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}