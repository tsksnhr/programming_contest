#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

int main(){

    int k;
    string s;
    cin >> k >> s;

    int size;
    size = s.size();
    vector<char> c;

    if (size <= k){
        cout << s << endl;
    }
    else{
        for (int i=0; i<k; i++){
            c.push_back(s.at(i));
        }
        for (int i=k; i<k+3; i++){
            c.push_back('.');
        }
        for (int i=0; i<c.size(); i++){
            cout << c.at(i);
        }
        cout << endl;
    }
    return 0;
}