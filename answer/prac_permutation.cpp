#include <bits/stdc++.h>
using namespace std;

void Permutation(int pos, int num);

int N;
vector<int> P(10);
vector<int> used(10);
map<vector<int>, int> pmap;

int main(){

    cin >> N;

    Permutation(0, N);

    for (auto tmp: pmap){
        auto key = tmp.first;
        cout << "{ "; 
        for (int i=0; i<N; i++){
            cout << key.at(i) << " " ;
        }
        cout << "}" << endl;
    }

    return 0;
}

void Permutation(int pos, int num){

    if (pos == num){
        pmap[P]++;
        return;
    }

    for (int i=1; i<=num; i++){

        if (used.at(i) == 0){
            P.at(pos) = i;
            used.at(i) = true;

            Permutation(pos+1, num);
            used.at(i) = false;
        }
    }
}