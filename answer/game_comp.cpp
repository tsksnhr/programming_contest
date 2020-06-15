#include <bits/stdc++.h>
using namespace std;

int main(void){

    int people_num, game_num, win, lose, i, j;
    cin >> people_num >> game_num;

    vector<vector<char>> result(people_num, vector<char> (people_num, '-'));

    for (i=0; i<game_num; i++){

        cin >> win >> lose;

        result.at(win-1).at(lose-1) = 'o';
        result.at(lose-1).at(win-1) = 'x';
    }

    for (i=0; i<people_num; i++){
        for (j=0; j<people_num; j++){
            cout << result.at(i).at(j);
            if (j != (people_num-1)){
                cout << ' ';
            }
            else{
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
