#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string A, B, C;
    cin >> A >> B >> C;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    reverse(C.begin(), C.end());

    char ch = A.at(A.size()-1);
    A.pop_back();
    while(true){
        if (ch == 'a'){
            if (A.size() == 0){
                cout << "A" << endl;
                return 0;
            }
            ch = A.at(A.size()-1);
            A.pop_back();
        }
        else if (ch == 'b'){
            if (B.size() == 0){
                cout << "B" << endl;
                return 0;
            }
            ch = B.at(B.size()-1);
            B.pop_back();
        }
        else{
            if (C.size() == 0){
                cout << "C" << endl;
                return 0;
            }
            ch = C.at(C.size()-1);
            C.pop_back();
        }
    }
}