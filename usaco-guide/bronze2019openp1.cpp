#include <algorithm>
#include <cmath>
#include <deque> // for stack and queue
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve() {
    pair<int, int> start, end;
    vector<string> map(10);
    for (auto &i : map) {
        cin >> i;
    }

    for (int i = 0; i < map.size(); ++i) {
        if (map[i].find("B") != string::npos) {
            int pos = map[i].find("B");
            start.first = pos;
            start.second = i;
        }
        if (map[i].find("L") != string::npos) {
            int pos = map[i].find("L");
            end.second = i;
            end.first = pos;
        }
    }

    cout << abs(start.first - end.first) + abs(end.second - start.second - 1) << endl;
}
