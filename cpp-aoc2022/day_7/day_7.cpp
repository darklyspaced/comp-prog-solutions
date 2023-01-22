#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>
#include <fstream>
#include <sstream>

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
    ifstream infile("day_7.txt");
    string line;
    string curr_dir;

    while(infile){
        getline(infile, line);
        if (line[0] == '$'){
            line = line.substr(2, line.size()-1);
            string token;
            stringstream input(line);
            while(getline(input, token, ' ')){

            }
            cout << line << endl;
        }
    }
}

