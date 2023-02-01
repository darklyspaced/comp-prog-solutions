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
#include <string_view>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
}

/* int possibilities(int x, int depth, string &s, vector<string> &values) { */
/*     if (x-1 == depth) { */
/*         return values.size(); */
/*     } */
/*     vector<string> new_values; */
/*     int env = s[depth]; */
/*     if (env == '0') { */
/*         std::sort(values.begin(), values.end()); */
/*         for (int i = 1; i < values.size(); ++i) { */
/*             vector<string> temp = values; // FIXME: */
/*             temp.erase(temp.begin() + i); */
/*             string str(temp.begin(), temp.end()); */
/*             new_values.emplace_back(str); */
/*         } */
/*         return possibilities(x, depth + 1, s, new_values); */
/*     } */
/*     std::sort(values.begin(), values.end()); */
/*     std::reverse(values.begin(), values.end()); */
/* } */

void solve() {
    int _t; cin >> _t;
    rep(_, _t) {
        int n; cin >> n;
        string s; cin >> s;

        rep(i, n) {
            vector<string> values;
            for (int x = 1; x < i+1; ++x) {
                values.emplace_back(x);
            } 
            string temp = std::string((values.begin(), values.end()));
            values.clear();
            values.emplace_back(temp);
            for (auto i : values) {
                cout << i << endl;
            }
            /* possibilities(i+1, 0, s, values); */
        }
    }
}
