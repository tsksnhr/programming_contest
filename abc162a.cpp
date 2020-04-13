#include <bits/stdc++.h>
using namespace std;

int main(){

    int input_num;
    cin >> input_num;

    string str_buf;

    str_buf = to_string(input_num);

    int i;

    for (i=0; i<str_buf.size(); i++){
        if (str_buf.at(i) == '7'){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}