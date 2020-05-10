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

    long long pos; // = A.at(1);
    long long move = 0;
    long long rmove = 0;
    long long last_move = 0;
    long long ans = 0;
    long long ans_pos = 0;
    long long rstart = 0;
    long long fmove = 0;
    bool fflg = false;

    pos = 1;
    Acnt.at(1) = 1;
    while (1){
        pos = A.at(pos);
        Acnt.at(pos)++;
        move++;
        if (Acnt.at(pos) == 3){
            rstart = pos;
            break;
        }
    }

    for (int i=1; i<N+1; i++){
        if (Acnt.at(i)==1){
            fmove++;
        }
    }
    for (int i=1; i<N+1; i++){
        if (Acnt.at(i)>1){
            rmove++;
        }
    }

    last_move = (K)%rmove;

    pos = 1;
    for (int i=0; i<last_move; i++){
        pos = A.at(pos);
    }

    cout << pos << endl;
    return 0;
}