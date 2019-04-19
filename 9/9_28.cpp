#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void insertafter(forward_list<string> &lst,const string &s1,const string &s2){
    auto t = lst.begin();
    auto p = lst.before_begin();
    bool flag = 0;
    for (; t != lst.end(); p=t++){
        if(*t==s1){
            flag = 1;
            break;
        }
    }
    if(flag==1)
        lst.insert_after(t, s2);
    else
        lst.insert_after(p, s2);
}

int main(){
    forward_list<string> l{"white", "red", "blue", "green"};
    insertafter(l, "blue", "yellow");
    insertafter(l, "black", "grey");
    for(auto i:l)
        cout << i << " ";
    cout << endl;

    return 0;
}