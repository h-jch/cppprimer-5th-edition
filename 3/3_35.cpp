#include <iostream>
using namespace std;

int main(){
    int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (auto i = begin(n); i < end(n);i++)
        *i = 0;
    for(auto i:n)
        cout << i << " ";
    cout << endl;

    return 0;
}