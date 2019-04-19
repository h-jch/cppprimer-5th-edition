#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n1[10], n2[10];
    for (int i = 0; i < 10;i++)
        n1[i] = i;
    for (int i = 0; i < 10;i++)
        n2[i] = n1[i];
    for(auto i:n2)
        cout << i << " ";
    cout << endl;

    vector<int> v1, v2(10);
    for (int i = 0; i < 10;++i)
        v1.push_back(i);
    v2 = v1;
    for(auto i:v2)
        cout << i << " ";
    cout << endl;

    return 0;
}