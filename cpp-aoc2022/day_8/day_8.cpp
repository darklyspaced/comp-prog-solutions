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

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    ifstream infile("day_8.txt");
    int visible = 0;
    map<int, int> highest_column;
    string line;
    vector<string> trees;
    while(getline(infile, line)){
        trees.push_back(line);
    }

    for(auto x : trees){

    }
    cout << visible << endl;
}

