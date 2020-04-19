#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin >> num;

    vector<int> emp_num(num);
    int i;
    vector<int> relation(num);

    for (i=0; i<num-1; i++){
        cin >> emp_num.at(i);
//        relation.at(i) = 0;
    }

    for (i=0; i<num-1; i++){
        relation.at(emp_num.at(i)-1)++;
    }

    for (i=0; i<num; i++){
        cout << relation.at(i) << endl;
    }

    return 0;
}