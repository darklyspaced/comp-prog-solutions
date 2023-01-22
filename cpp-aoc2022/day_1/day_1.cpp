#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>
#include <fstream>

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
    ifstream file;
    string line;
    vector<int> calories;
    int current = 0;
    file.open("day_1.txt");

    while(file){
        getline(file, line);
        if(line.empty()){
            calories.PB(current);
            current = 0;
        }else{
            current += stoi(line);
        }
    }
    sort(calories.begin(), calories.end());
    int ans = 0;
    REP(i, 3){
        ans += calories[calories.size() - (i+1)];
    }
    cout << ans;
    file.close();
}
