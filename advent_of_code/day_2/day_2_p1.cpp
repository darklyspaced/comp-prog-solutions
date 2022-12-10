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
    map<char, int> points = {{'X', 1}, {'Y', 2}, {'Z', 3}};
    map<char, char> equiv = {{'X', 'A'}, {'Y', 'B'}, {'Z', 'C'}};
    int ans = 0;

    ifstream infile;
    infile.open("day_2.txt");
    string line;


    while(getline(infile, line)){
        if(line[0] == equiv.at(line[2])){
            ans += points.at(line[2]) + 3; //draw
        }else{
            switch (line[0]){
                case 'A':
                    if(line[2] == 'Y'){
                        ans += (points[line[2]] + 6); //paper beats rock
                    }else{
                        ans += (points[line[2]] + 0); //scissors loses to rock
                    }
                    break;
                case 'B':
                    if(line[2] == 'Z'){
                        ans += (points[line[2]] + 6); //scissors beats paper 
                    }else{
                        ans += (points[line[2]] + 0); //rock loses to paper
                    }
                    break;
                case 'C':
                    if(line[2] == 'X'){
                        ans += (points[line[2]] + 6); //
                    }else{
                        ans += (points[line[2]] + 0);
                    }
                    break;
            }
        }
    }

    cout << ans;
    infile.close();
}

