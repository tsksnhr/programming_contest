#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector <int>> bingo(3, vector<int>(3));
    vector<vector <int>> ans(3, vector<int>(3));
    int i, j;

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin >> bingo.at(i).at(j);
        }
    }

    int N, temp, count;
    cin >> N;

    for (count=0; count<N; count++){
        cin >> temp;
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                if ( bingo.at(i).at(j) == temp){
                    ans.at(i).at(j) = 1;
                }
            }
        }
    }

    if ( (ans.at(0).at(0) == 1) && (ans.at(0).at(1) == 1) && (ans.at(0).at(2) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(1).at(0) == 1) && (ans.at(1).at(1) == 1) && (ans.at(1).at(2) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(2).at(0) == 1) && (ans.at(2).at(1) == 1) && (ans.at(2).at(2) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(0).at(0) == 1) && (ans.at(1).at(0) == 1) && (ans.at(2).at(0) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(0).at(1) == 1) && (ans.at(1).at(1) == 1) && (ans.at(2).at(1) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(0).at(2) == 1) && (ans.at(1).at(2) == 1) && (ans.at(2).at(2) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(0).at(0) == 1) && (ans.at(1).at(1) == 1) && (ans.at(2).at(2) == 1)){
        cout << "Yes" << endl;
    }
    else if ( (ans.at(0).at(2) == 1) && (ans.at(1).at(1) == 1) && (ans.at(2).at(0) == 1)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}