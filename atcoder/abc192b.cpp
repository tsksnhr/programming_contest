#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++){
        char buf = S.at(i);

        // odd
        if (i%2 == 0){
            if (isupper(buf)){
                cout << "No" << endl;
                return 0;
            }
        }
        // even
        else{
            if (islower(buf)){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}