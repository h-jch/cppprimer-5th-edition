#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 6, 1, 3, 6, 7, 8, 9, 4, 2};
    cout << count(v.begin(), v.end(), 1) << endl;

    return 0;
}