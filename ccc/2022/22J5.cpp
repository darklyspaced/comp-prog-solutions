#include <iostream>
#include <string>
#include <sys/wait.h>
#include <vector>
using namespace std;

void solve();

int main() { solve(); }

void solve() {
  int size;
  cin >> size;
  int trees;
  cin >> trees;
  vector<pair<int, int>> locs(trees);
  for (auto &i : locs) {
    pair<int, int> temp;
    int tum;
    cin >> tum;
    temp.first = tum;
    cin >> tum;
    temp.second = tum;
    i = temp;
  }

  for (int i = size; i > 0; --i) {
    pair<int, int> top_left = {1, 1};
    pair<int, int> bottom_right = {i, i};
    for (int y = 0; y < size - bottom_right.first + 1; ++y) {
      for (int x = 0; x < size - bottom_right.second + 1; ++x) {
        int ans = 0;
        for (auto d : locs) {
          if (((d.first >= (top_left.first + y)) &&
               (d.first <= (bottom_right.first + y)) &&
               (d.second >= (top_left.second + x)) &&
               (d.second <= (bottom_right.second + x)))) {
            break;
          } else {
            ans++;
          }
        }
        if (ans == trees) {
          cout << i << endl;
          return;
        }
      }
    }
  }
}
