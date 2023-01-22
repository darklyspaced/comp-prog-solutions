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
#define FOR(var, init, reps) for(int(var) = (init); (var) < (reps); ++(var))
#define REP(var, reps) FOR(var, 0, reps)
#define SIZE(v) v.size()
#define ALL(v) v.begin(), v.end()


void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    vector<int> nums;
    vector<string> ans;
    REP(i, 10){
        nums.PB(i);
    }
    string text; cin >> text;
    string changed = text;
    FOR(i, 0, SIZE(text)){
        int j = text[i] - '0'; //numbers start at ascii 48 and 0 has value 48; 49 (1) - 48 (0) = 1
        if (binary_search(ALL(nums), j)){
            ans.PB(changed.substr(0, (i+1)-(SIZE(text)-SIZE(changed))));
            changed = text.substr(i+1, SIZE(text));
        }
    }
    for(string &x : ans){
        FOR(i, 0, SIZE(x)){
            if (x[i] == '+'){
                x.replace(i, 1, " tighten ");
            }else if(x[i] == '-'){
                x.replace(i, 1, " loosen ");
            }
        }
    }
    for(string x : ans){
        cout << x << endl;
    }
}