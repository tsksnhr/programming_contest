#include <bits/stdc++.h>
using namespace std;

int main(){

    int A, B;
    string S;
    cin >> A >> B >> S;

    if (S.at(A) != '-'){
        cout << "No" << endl;
        return 0;
    }
    for (int i=0; i<S.size(); i++){
        if (S.at(i) == '-'){
            if (i != A){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}