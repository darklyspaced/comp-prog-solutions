#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    if ((a*10) % b==0){
        cout << a << string(n,'0');
    }else{
        for(int i = 1; i < 10; i++){
            if ((a*10+i) % b==0){
                a = a*10+i;
                cout << a << string(n-1, '0');
                return;
            }
        }
        cout << "-1"; return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}