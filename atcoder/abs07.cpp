#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N;
    int i, alice, bob, ans;

    cin >> N;

    vector<int> cards(N);

    for (i=0; i<N; i++){
        cin >> cards.at(i);
    }

    sort(cards.begin(), cards.end());

    alice = 0;
    bob = 0;

    for (i=N-1; i>=0; i-=2){
        alice += cards.at(i);
    }
    for (i=N-2; i>=0; i-=2){
        bob += cards.at(i);
    }

    cout << alice - bob << endl;

    return 0;
}