#include <algorithm>
#include <cmath>
#include <numeric>
#include <deque> // for stack and queue
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <string_view>
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
    int num;
    cin >> num;
    vector<string> names(num);
    for (auto &x : names) {
        cin >> x;
    }

    string curr;
    sort(names.begin(), names.end());
    


    while (names.size() > 1) {
        curr = names.front();
        names.erase(names.begin());
        if (names.size() > 1) {
            for (auto character : curr) {
                for (auto word : names) {
                    if (word.find(character) != string::npos) {
                        names.erase(remove(names.begin(), names.end(), word), names.end());
                    }
                }
            }
        }
    }
    cout << names[0] << endl;
}
