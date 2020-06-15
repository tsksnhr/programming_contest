#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main(){

    cin >> N >> S;

    if (N%2 != 0){
        cout << "No" << endl;
        return 0;
    }
    else{
        for (int i=0; i<(N/2); i++){
            if (S.at(i) != S.at(i+(N/2))){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
