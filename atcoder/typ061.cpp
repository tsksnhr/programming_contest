// Deck (star_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll Q;
    cin >> Q;
    deque<ll> deck;

    for (ll i = 0; i < Q; i++){
        ll t, x;
        cin >> t >> x;

        if (t == 1) deck.push_front(x);
        else if (t == 2) deck.push_back(x);
        else{
            x--;
            cout << deck.at(x) << endl;
        }
    }

    return 0;
}