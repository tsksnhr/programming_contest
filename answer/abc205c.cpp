// POW

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll A, B, C;
    cin >> A >> B >> C;

    bool is_even = (C%2 == 0);

    if (A == B || C == 0){
        cout << "=" << endl;
        return 0;
    }
    else if(A >= 0 && B >= 0){
        if (A > B) cout << ">" << endl;
        else cout << "<" << endl;
        return 0;
    }
    else if (A < 0 && B < 0){
        if (is_even){
            if (abs(A) > abs(B)) cout << ">" << endl;
            else cout << "<" << endl;
            return 0;
        }
        else{
            if (abs(A) > abs(B)) cout << "<" << endl;
            else cout << ">" << endl;
            return 0;
        }
    }
    else{
        if (A < 0){
            if (is_even){
                if (abs(A) > abs(B)) cout << ">" << endl;
                else if (abs(A) == abs(B)) cout << "=" << endl;
                else cout << "<" << endl;
                return 0;
            }
            else{
                cout << "<" << endl;
                return 0;
            }
        }
        else{
            if (is_even){
                if (abs(A) > abs(B)) cout << ">" << endl;
                else if (abs(A) == abs(B)) cout << "=" << endl;
                else cout << "<" << endl;
                return 0;
            }
            else{
                cout << ">" << endl;
                return 0;
            }
        }
    }
}