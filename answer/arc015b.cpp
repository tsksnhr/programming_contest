#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    vector<ll> temperature_data(6, 0);
    for (int i = 0; i < N; i++){
        double maximum, minimum;
        cin >> maximum >> minimum;

        int key = -1;
        if (maximum >= 35.) key = 0;
        else if (maximum >= 30.) key = 1;
        else if (maximum >= 25.) key = 2;
        else if (maximum < 0.) key = 5;
        
        if (key != -1) temperature_data.at(key)++;

        key = -1;
        if (minimum >= 25. ) key = 3;
        else if (minimum < 0.){
            if (maximum >= 0.) key = 4;
        }
        if (key != -1) temperature_data.at(key)++;
    }

    for (int i = 0; i < 6; i++){
        cout << temperature_data.at(i);

        if (i != 5) cout << " ";
    }
    cout << endl;

    return 0;
}