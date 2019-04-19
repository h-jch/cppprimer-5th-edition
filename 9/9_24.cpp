#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n1=v.at(0);
    int n2 = v[0];
    int n3 = v.front();
    int n4 = *v.begin();
    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    return 0;
}