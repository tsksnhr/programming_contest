#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(1e5+5);
vector<int> order(1e5+5);

int main(){

    cin >> N;
    for (int i=1; i<=N; i++){
        cin >> A.at(i);
    }

    for (int i=1; i<=N; i++){
        order.at(A.at(i)) = i;
    }

    for (int i=1; i<=N; i++){
        cout << order.at(i) << " ";
    }
    cout << endl;
    return 0;
}