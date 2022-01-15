#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve (test-case 3, 4)

int main(){

    string S;
    cin >> S;

    ll A_cnt = 0;
    string S_edited = "";
    string ref = "KIH";
    
    if (S.find(ref) == string::npos){
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < S.size(); i++){
        char ch = S.at(i);

        if (ch == 'A'){
            if (A_cnt == 0){
                A_cnt++;
                continue;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        else{
            S_edited += ch;
            A_cnt = 0;
        }
    }

    if (S_edited == "KIHBR") cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}