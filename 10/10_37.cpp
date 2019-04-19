#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    list<int> l(5);
    copy(v.crbegin()+2, v.crend()-3, l.begin());
    for(auto i:l)
        cout << i << " ";
    cout << endl;

    return 0;
}