#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> test{0, 1, 2, 3, 11, 5, 6, 9};

    cout << *max_element(std::next(begin(test), 4), test.begin()+7) << endl;
    cout << *max_element(begin(test)+4, test.begin()+7) << endl;

}
