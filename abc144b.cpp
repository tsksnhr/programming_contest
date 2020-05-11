#include <bits/stdc++.h>
using namespace std;

int N;

int main(){

    cin >> N;

    int ans;
    for (int i=1; i<10; i++){
        for (int j=1; j<10; j++){
            ans = i*j;

            if (ans == N){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}