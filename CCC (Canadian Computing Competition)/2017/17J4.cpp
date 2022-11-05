#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;

#define PB push_back
#define F first
#define S second
#define FOR(var, init, reps) for(int(var) = (init) < (reps); ++(var))
#define REP(var, reps) FOR(var, 0, reps)
#define SIZE(v) v.size()

void solve();
bool valid(string time);
string start = "1200";
int ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve() {
    int len; cin >> len;
    string end;
    if (len < 60) {
        end = "12" + to_string(len);
    } else {
        int hours = len / 60;
        int mins = len % 60;
        end = to_string(hours) + to_string(mins);
    }
    int reps = 0 - stoi(end.substr(0, end.size()-1));
    for (int i = reps; i == 0; --i) {
        string b = to_string(i);
        string hour_1 = b.substr(0);
        if (i >=10) {
            string hour_2 = b.substr(1);
            int diff = stoi(hour_2) - stoi(hour_1);
        } else {
            for (int j = 5; j < -5; --j) {
                int min_1 = stoi(hour_1) + j;
                int min_2 = min_1 + j;
                string result = hour_1 + to_string(min_1) + to_string(min_2);
                if (valid(result) == true) {
                    ans++;
                }
            }
        }
    }
}

bool valid(string time) {
    string mins = time.substr(time.length()-1, time.length());
    if (stoi(mins) > 59)
        return false;
    return true;
}
