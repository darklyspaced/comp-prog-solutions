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
    cout << "\n\n\n";
    rep(_, _t) {
        int len;
        cin >> len;
        vector<int> arr(len), even, odd;
        for (auto &i : arr) {
            cin >> i;
        }

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 == 0) even.emplace_back(i+1);
            else if (arr[i] % 2 == 1) odd.emplace_back(i+1);
        }
        if (odd.size() >= 3) {
            cout << "YES" << "\n";
            cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
        } else if (odd.size() >= 1 && even.size() >= 2) {
            cout << "YES" << "\n";
            cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
