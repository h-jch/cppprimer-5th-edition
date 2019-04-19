#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    list<int> l1{1, 2, 3, 4, 5};
    list<int> l2{1, 2, 3};
    vector<int> v{1, 2, 3, 4, 5};

    cout << (vector<int>(l1.begin(), l1.end()) == v) << endl;
    cout << (vector<int>(l2.begin(), l2.end()) == v) << endl;

    return 0;
}