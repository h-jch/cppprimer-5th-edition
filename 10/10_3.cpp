#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 1, 6, 2, 4, 6, 8};
    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

    return 0;
}