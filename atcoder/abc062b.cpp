#include <bits/stdc++.h>
using namespace std;

int main(){

    int h, w;
    cin >> h >> w;

    vector<vector <char>> pict(h, vector<char>(w));
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            cin >> pict.at(i).at(j);
        }
    }

    for (int i=0; i<w+2; i++) cout << "#";
    cout << endl;

    for (int i=0; i<h; i++){
        cout << "#";
        for (int j=0; j<w; j++){
            cout << pict.at(i).at(j);
        }
        cout << "#" << endl;
    }
    
    for (int i=0; i<w+2; i++) cout << "#";
    cout << endl;

    return 0;
}