// Shiritori
// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    map<string, int> head;
    map<string, int> tail;
    vector<pair<string, string>> t_dict(N);
    for (int i = 0; i < N; i++){
        string tmp;
        cin >> tmp;
        int length = tmp.size();

        string head_buf, tail_buf;
        for (int i = 0; i < 3; i++){
            head_buf += tmp.at(i);
            tail_buf += tmp.at(length - 1 - i);
        }
        reverse(tail_buf.begin(), tail_buf.end());

        head[head_buf]++;
        tail[tail_buf]++;
        t_dict.at(i).first = head_buf;
        t_dict.at(i).second = tail_buf;
    }

    for (int i = 0; i < N; i++){
        string head_word, tail_word;
        head_word = t_dict.at(i).first;
        tail_word = t_dict.at(i).second;

        if (head_word == tail_word) cout << "Draw" << endl;

        queue<string> que;
        int cnt = 0;
        que.push(tail_word);
        cnt++;
        while (!que.empty()){
            string str = que.front();
            que.pop();

            for (auto p: head){
                if (p.first == str){
                    que.push(p.first);
                    cnt++;
                    break;
                }
            }
        }
        if (cnt%2 == 0) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }

    return 0;
}