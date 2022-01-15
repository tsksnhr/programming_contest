// Not Too Bright (star_2)

#include <bits/stdc++.h>
using namespace std;

int solver_com(int H, int W){

    int ans, row, column;
    if (H%2 == 0) row = H/2;
    else row = H/2 + 1;
    if (W%2 == 0) column = W/2;
    else column = W/2 + 1;
    ans = row*column;

    return ans;
}

int solver_corner(int H, int W){

    int ans;
    ans = H*W;

    return ans;
}

int main(){

    int H, W;
    cin >> H >> W;

    int ans;
    if (H == 1 || W == 1) ans = solver_corner(H, W);
    else ans = solver_com(H, W);

    cout << ans << endl;
    return 0;
}