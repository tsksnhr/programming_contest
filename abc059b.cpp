#include <bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    cin >> a >> b;

    int size_a, size_b;
    size_a = a.size();
    size_b = b.size();

    if (size_a > size_b){
        cout << "GREATER" << endl;
    }
    else if (size_a < size_b){
        cout << "LESS" << endl;
    }
    else{
        for (int i=0; i<size_a; i++){
            if (a.at(i) > b.at(i)){
                cout << "GREATER" << endl;
                return 0;
            }
            if (a.at(i) < b.at(i)){
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
    }
    return 0;
}