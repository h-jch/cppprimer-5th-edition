#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(){
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8};
    deque<int> d1, d2;
    for(auto i:l){
        if(i%2==0)
            d1.push_back(i);
        else
            d2.push_back(i);
    }
    for(auto i:d1)
        cout << i << " ";
    cout << endl;
    for(auto i:d2)
        cout << i << " ";
    cout << endl;

    return 0;
}