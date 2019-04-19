#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void elimDups(list<string> &words){
    words.sort();
    words.unique();
}

int main(){
    list<string> l{"a", "b", "c", "a", "d", "b", "a", "a", "b"};
    elimDups(l);
    for(auto s:l)
        cout << s << " ";
    cout << endl;

    return 0;
}