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
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    map<char, int> points = {{'A', 1}, {'B', 2}, {'C', 3}};
    map<char, char> loss = {{'A', 'C'}, {'B', 'A'}, {'C', 'B'}};
    map<char, char> win = {{'A', 'B'}, {'B', 'C'}, {'C', 'A'}};
    int ans = 0;

    ifstream infile;
    infile.open("day_2.txt");
    string line;

    while(getline(infile, line)){
        if(line[2] == 'Y'){
            ans += points.at(line[0]) + 3; //draw
        }else{
            switch (line[2]){
                case 'X':
                    ans += points.at(loss.at(line[0])) + 0;
                    break;
                case 'Z':
                    ans += points.at(win.at(line[0])) + 6;
                    break;
            }
        }
    }

    cout << ans;
    infile.close();
}

