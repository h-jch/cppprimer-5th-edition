#include <iostream>
using namespace std;

template<typename T,unsigned N>
void myPrint(const T (&a)[N]){
    for(const auto &i:a)
        cout << i << " ";
    cout << endl;
}