#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(const T &c){
    for (auto i = c.begin(); i != c.end();++i){
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<string> v2 = {"aa", "bb", "cc"};
    print(v1);
    print(v2);

    return 0;
}