#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){

    cin >> n >> s;

    int i, count = 1;
    for (i=1; i<n; i++){
        if (s.at(i) != s.at(i-1)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}