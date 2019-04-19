#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<double> v{1.2, 3.4, 5.3, 7.2};
    cout << accumulate(v.cbegin(), v.cend(), 0.0) << endl;

    return 0;
}