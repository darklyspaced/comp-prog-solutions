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

bool confusing(int A, int B, int C, int D){
    int g = A*10 + C;
    int n = B*10 + D;
    if((0 <= g) && (g <= 23) && ((0 <= n) && (n <= 59))){
        return true;
    }else{
        return false;
    }
}

void solve(){
    int h, m; cin >> h >> m;
    int A, B, C, D;
    A = h / 10;
    B = h % 10;
    C = m / 10;
    D = m % 10;
    if (!(confusing(A, B, C, D))){
        h++; B = h % 10;
        if(h==24){
            h = 0;
        }
        while(B > 6){
            h++;
            B = h % 10;
        }
        cout << h << " " << "00" << "\n";
    }else{
        cout << h << " " << m << "\n";
    }
}
