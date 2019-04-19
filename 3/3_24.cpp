#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    while(cin>>n)
        v.push_back(n);

/*    for (auto i = v.begin(); i < v.end() - 1; ++i){
        cout << *i + *(i + 1) << " ";
    }
    cout << endl;
*/

    for (auto i = v.begin(), j = v.end() - 1; i <= j; ++i, --j)
    {
        cout << *i + *j << " ";
    }
    cout << endl;

    return 0;
}