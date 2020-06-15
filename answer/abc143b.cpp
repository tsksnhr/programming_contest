#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> d(55);

int main(){

    cin >> N;
    for (int i=0; i<N; i++){
        cin >> d.at(i);
    }

    int sum = 0;
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            sum += d.at(i)*d.at(j);
        }
    }

    cout << sum << endl;
    return 0;
}