#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int> l{1, 4, 5, 0, 6, 5, 3, 0, 2, 4};
    auto it = find(l.crbegin(), l.crend(), 0);
    cout << *it << " " << *it.base() << endl;

    return 0;
}