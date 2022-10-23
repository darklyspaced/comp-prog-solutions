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
    solve();
}

void solve(){
    int iter;
    int temp;
    vi v;
    vi rev;
    pii p;
    bool run = false;
    cin >> iter;
    REP(i, iter){
        cin >> temp;
        v.PB(temp);
    }
    if(is_sorted(ALL(v))){
        cout << "yes" << "\n";
        cout << "1 1";
        return;
    }
    FOR(i, 0, iter){
        if(i == 0) continue;
        else{
            if (v[i-1] > v[i]){
                if(v[i+1] > v[i] || i+1 == iter){
                    p.S = i+1;
                }
                if(v[i-2] < v[i-1]){
                    p.F = (i-1)+1;
                    run = true;
                }
                if(i+1 == iter && run==false){
                    p.F = 1;
                }
            }
        }
    }
    reverse((v.begin()+(p.F - 1)), (v.begin()+(p.S)));
    if(is_sorted(ALL(v))){
        cout << "yes" << "\n";
        cout << p.F << " " << p.S;
    }else{
        cout << "no";
    }
}
