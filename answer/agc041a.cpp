#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){

    ull N, A, B;
    cin >> N >> A >> B;

    ull dif = B - A;
    ull ans, A_move, B_move;
    A_move = N - A;
    B_move = B - 1;



    if (dif%2 == 0) ans = dif/2;
    else {
        if (A > N/2) ans = N - A;
        else if (B <= N/2) ans = B - 1;
        else{
            if (A_move <= B_move) ans = A_move;
            else ans = B_move; 
        }
    }

    cout << ans << endl;
    return 0;    
}