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

void solve() {
    int _t; cin >> _t;
    string code = "codeforces";
    rep(_, _t) {
        string temp; cin >> temp;
        if (code.find(temp) != string::npos) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}

