#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(const T &c){
    using size_type = typename T::size_type;
    for (size_type i = 0; i != c.size();++i){
        cout << c.at(i) << " ";
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