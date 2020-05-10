#include <bits/stdc++.h>
using namespace std;

string s, t;

int main(){

    cin >> s >> t;

    int size;
    size = s.size();

    for (int i=0; i<size; i++){
        if (s.at(i) != t.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}