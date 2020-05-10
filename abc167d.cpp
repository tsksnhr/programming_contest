#include <bits/stdc++.h>
using namespace std;

long long N, K;
vector<long long> A(2e5+5);
vector<long long> Acnt(2e5+5);

int main(){
    
    cin >> N >> K;

    for (int i=1; i<N+1; i++){
        cin >> A.at(i);
    }

    long long pos = 0;
    long long rmove = 0;
    long long last_move = 0;

    pos = 1;
    Acnt.at(1) = 1;
    while (1){
        pos = A.at(pos);
        Acnt.at(pos)++;
        if (Acnt.at(pos) == 3){
            break;
        }
    }

    for (int i=1; i<N+1; i++){
        if (Acnt.at(i)>1){
            rmove++;
        }
    }

    last_move = K%rmove;

    pos = 1;
    for (int i=0; i<last_move; i++){
        pos = A.at(pos);
    }

    cout << pos << endl;
    return 0;
}