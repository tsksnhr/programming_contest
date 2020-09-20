#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(int N, vector<int> &ogn){

    for( int i = 1; i < N; ++i){
        int tmp = ogn.at(i);
        int j = i-1;

        while( (j >= 0) && (tmp < ogn.at(j))){
            ogn.at(j+1) = ogn.at(j);
            ogn.at(j) = tmp;
            --j;
        }

        for(int i = 0; i < N-1; ++i){
            cout << ogn.at(i) << " "s;
        }
        cout << ogn.at(N-1);
        cout << endl;
    }
    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> ogn(N);
    for( int i = 0; i < N; ++i){
        cin >> ogn.at(i);
    }

    for(int i = 0; i < N-1; ++i){
        cout << ogn.at(i) << " "s;
    }
    cout << ogn.at(N-1);
    cout << endl;

    solver(N, ogn);

    return 0;
}
