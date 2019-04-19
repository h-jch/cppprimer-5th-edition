#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    int ia[] = {0, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(ia,end(ia));
    list<int> l(ia,end(ia));
    
    for (auto p1 = v.begin();p1!=v.end();){
        if(*p1%2==0){
            p1 = v.erase(p1);
        }
        else{
            ++p1;
        }
    }
    auto p2 = l.begin();
    while(p2!=l.end()){
        if(*p2%2!=0){
            p2 = l.erase(p2);
        }
        else{
            ++p2;
        }
    }
    for(auto i:v)
        cout << i << " ";
    cout << endl;
    for(auto i:l)
        cout << i << " ";
    cout << endl;

    return 0;
}