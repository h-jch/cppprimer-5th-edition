#include <iostream>
#include <list>
#include <forward_list>
using namespace std;
/*
int main(){
    list<int> lst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin();
    while(iter!=lst.end()){
        if(*iter%2){
            iter = lst.insert(iter, *iter);
            advance(iter, 2);
        }
        else{
            iter = lst.erase(iter);
        }
    }
    for(auto i:lst)
        cout << i << " ";
    cout << endl;

    return 0;
}
*/

int main(){
    forward_list<int> flst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = flst.begin();
    auto prev = flst.before_begin();
    while(iter!=flst.end()){
        if(*iter%2){
            prev = flst.insert_after(prev, *iter);
            prev = iter++;
        }
        else{
            iter = flst.erase_after(prev);
        }
    }
    for(auto i:flst)
        cout << i << " ";
    cout << endl;

    return 0;
}