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
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
    solve();
}

void solve(){
    int a; cin >> a;
    int k; cin >> k;
    int counter = 0;
    vi nums(a);
    for(int &x : nums){
        cin >> x;
    }
    for(int i = 0; i < a; ++i){
        if(k >= nums.size()){
            REP(x, a){
                cout << "0 ";
            }
            return;
        }else if(counter < k){
            nums.erase(begin(nums));        
            nums.PB(0);
            counter++;
        }else{
            for(int x : nums){
                cout << x << " ";
            }
            return;
        }
    }
}

