#include<bits/stdc++.h>
using namespace std;

void solver1(int N, vector<pair<char, int>> &a){

    // bubble sort
    bool flg = true;
    for(int i = 0; flg; ++i){
        flg = false;

        for(int j = N-1; j > i; --j){
            if(a.at(j).second < a.at(j-1).second){
                pair<char, int> tmp = a.at(j);
                a.at(j) = a.at(j-1);
                a.at(j-1) = tmp;

                flg = true;
            }
        }
    }
    return;
}

void solver2(int N, vector<pair<char, int>> &b, bool &flg2, vector<pair<char, int>> &a){

    // selection sort
    for(int i = 0; i < N; ++i){
        int min_pos = i;
        
        for(int j = i+1; j < N; ++j){
            if(b.at(min_pos).second > b.at(j).second){
                min_pos = j;
            }
        }
        if(min_pos != i){
            pair<char, int> tmp = b.at(i);
            b.at(i) = b.at(min_pos);
            b.at(min_pos) = tmp;
        }
    }

    for(int i = 0; i < N; ++i){
        if(a.at(i) != b.at(i)){
            flg2 = false;
            break;
        }
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<pair<char, int>> a(N);
    for(int i = 0; i < N; ++i){
        cin >> a.at(i).first >> a.at(i).second;
    }

    vector<pair<char, int>> b(N);
    b = a;

    bool flg2 = true;
    solver1(N, a);
    solver2(N, b, flg2, a);

    for(int i = 0; i < N-1; ++i){
        cout << a.at(i).first << a.at(i).second << " "s;
    }
    cout << a.at(N-1).first << a.at(N-1).second << endl;
    cout << "Stable"s << endl;;

    for(int i = 0; i < N-1; ++i){
        cout << b.at(i).first << b.at(i).second << " "s;
    }
    cout << b.at(N-1).first << b.at(N-1).second << endl;
    if(flg2){
        cout << "Stable"s << endl;
    }
    else{
        cout << "Not stable"s << endl;
    }

    return 0;
}