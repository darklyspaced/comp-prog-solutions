#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
}

void test(string &dir, vector<int> &pos) {
    for (int i = 0; i < dir.size(); ++i) {
        if (dir[i] == 'U') {
            pos[1] += 1;
        } else if (dir[i] == 'R') {
            pos[0] += 1;
        } else if (dir[i] == 'L') {
            pos[0] -= 1;
        } else if (dir[i] == 'D') {
            pos[1] -= 1;
        }
        if (pos[0] == 1 && pos[1] == 1) {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}

void solve() {
    int _t; cin >> _t;
    rep(_, _t) {
        int temp; cin >> temp;
        vector<int> pos = {0, 0};
        string dir; cin >> dir;
        test(dir, pos);
    }
}


