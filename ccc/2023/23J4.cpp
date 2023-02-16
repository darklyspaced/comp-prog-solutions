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
  int _t;
  cin >> _t;
  vector<int> first(_t);
  vector<int> second(_t);
  for (int &i : first) {
    cin >> i;
  }
  for (int &i : second) {
    cin >> i;
  }
  int ans = 0;
  for (int i = 0; i < first.size(); ++i) {
    if (first[i] == 1) {
      int add = 3;
      if (i > 0) {
        if (first[i - 1] == 1) {
          add--;
        }
      }
      if (i % 2 == 0) {
        if (second[i] == 1) {
          add--;
        }
      }
      if (i != first.size()) {
        if (first[i + 1] == 1) {
          add--;
        }
      }
      ans = ans + add;
    }
  }
  for (int i = 0; i < second.size(); ++i) {
    if (second[i] == 1) {
      int add = 3;
      if (i > 0) {
        if (second[i - 1] == 1) {
          add--;
        }
      }
      if (i % 2 == 0) {
        if (first[i] == 1) {
          add--;
        }
      }
      if (i != second.size()) {
        if (second[i + 1] == 1) {
          add--;
        }
      }
      ans = ans + add;
    }
  }
  cout << ans << endl;
}
