#include <bits/stdc++.h>
using namespace std;

int main(){

    int H, W;
    cin >> H >> W;

    vector<string> graffic(H);
    for (int i = 0; i < H; i++) cin >> graffic.at(i);

    // after editorial
    int ans = 0;
    for (int h = 0; h < H-1; h++){
        for (int w = 0; w < W-1; w++){
            int black_cnt = 0;

            for (int dh = 0; dh <= 1; dh++){
                for (int dw = 0; dw <= 1; dw++){
                    if (graffic.at(h+dh).at(w+dw) == '#') black_cnt++;
                }
            }

            if ((black_cnt == 1) || (black_cnt == 3)) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}