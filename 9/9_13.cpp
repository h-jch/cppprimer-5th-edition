#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    vector<double> v1(l.begin(), l.end());
    for(auto i:v1)
        cout << i << " ";
    cout << endl;
    vector<double> v2(v.begin(), v.end());
    for(auto i:v2)
        cout << i << " ";
    cout << endl;

    return 0;
}