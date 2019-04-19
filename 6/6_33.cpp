#include <iostream>
#include <vector>
using namespace std;

void printv(vector<int> v){
    static decltype(v.size()) i = 0;
    if(i!=v.size()){
        cout << v[i++] << endl;
        printv(v);
    }
}

int main(){
    vector<int> n;
    for (int i = 0; i < 10;++i)
        n.push_back(i);
    printv(n);

    return 0;
}