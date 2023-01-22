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
    string input; cin >> input;
    stringstream ss(input);
    int num; char start, end;
    ss >> start >> num >> end;
    if ((start >= 'A' && start <= 'Z') && (int(end) >= 'A' && int(end) <= 90)) {
        if (num >=100000 && num <= 999999){
            cout << "Yes" << endl;
            return;
        } 
        cout << "No" << endl;
        return;
    }
    cout << "No" << endl;
}
