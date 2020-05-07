#include <bits/stdc++.h>
using namespace std;

void DFS(int i, int j, vector<vector<char>> &area, int ans);

int main(){

    int H, W;
    cin >> H >> W;

    int a=0, b=0, c=0, d=0, max=0;
    vector<vector<char>> area(H, vector<char>(W));

    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            cin >> area.at(i).at(j);
        }
    }

    DFS(0, 0, area, a);
    DFS(0, W-1, area, b);
    DFS(H-1, 0, area, c);
    DFS(H-1, W-1, area, d);

    if (max<a){
        max = a;
        if (max<b){
            max = b;
            if (max<c){
                max = c;
                if (max<d){
                    max = d;
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}

void DFS(int i, int j, vector<vector<char>> &area, int ans){

    if((i==0) && (j==0) && (&area.at(i).at(j) == ".")){
        ans++;
        return;
    }
    if ( (i==0) && (&area.at(i).at(j) == ".")){
        ans++;
        DFS(i, j-1, area, ans);
    }
    if ((j==0) && (&area.at(i).at(j) == ".")){
        ans++;
        DFS(i-1, j, area, ans);
    }
    if (&area.at(i).at(j) == "#"){
        return;
    }

    DFS(i-1, j, area, ans);
    DFS(i, j-1, area, ans);
    DFS(i+1, j, area, ans);
    DFS(i, j+1, area, ans);

}