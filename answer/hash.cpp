// Hash
// ALDS1_4_D

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1000003;
const ll INVALID_KEY = -1;

ll hash_mini_1(ll key){
    ll h1 = key%MOD;
    return h1;
}

ll hash_mini_2(ll key){
    ll h2 = 1 + key%(MOD - 1);
    return h2;
}

ll make_hash(ll key, ll shift_num){
    ll hash_value = (hash_mini_1(key) + shift_num*hash_mini_2(key))%MOD;
    return hash_value;
}

void insert(ll key, vector<ll> &data_array){

    ll shift_num = 0;
    ll hash_value = 0;

    while (true){
//        cerr << "called inset" << endl;
        hash_value = make_hash(key, shift_num);
        if (data_array[hash_value] == INVALID_KEY) break;
        shift_num++;
    }
    data_array[hash_value] = key;

    return;
}

bool find(ll key, vector<ll> &data_array){
    
    ll shift_num = 0;
    ll hash_value = 0;

    while (true){
//        cerr << "called find" << endl;
        hash_value = make_hash(key, shift_num);
        ll saved = data_array[hash_value];
    
        if (saved == key) return true;
        if (saved == INVALID_KEY) return false;

        shift_num++;
    }

    return false;
}

ll change_word_to_ll(char ch){
    if (ch == 'A') return 1;
    else if (ch == 'C') return 2;
    else if (ch == 'G') return 3;
    else return 4;
}

int main(){

    int N;
    scanf("%d\n", &N);
    vector<ll> array(MOD, -1);
    for (ll i = 0; i < MOD; i++) array[i] = -1;
    for (ll i = 0; i < N; i++){
//        cerr << i << endl;

        char op[32];
        char key[32];
        scanf("%s %s", op, key);
        op[strlen(op)] = '\0';
        key[strlen(key)] = '\0';

        ll pos = 0;
        ll digit = 1;
        ll key_num = 0;
        while (key[pos] != '\0'){
            ll buf = change_word_to_ll(key[pos]);
            key_num += buf*digit;
            digit *= 10;
          	pos++;
        }

        if (op[0] == 'i') insert(key_num, array);
        else {
            bool flg = find(key_num, array);
            if (flg) printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}