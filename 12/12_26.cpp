#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main(){
    allocator<string> alloc;
    auto const p = alloc.allocate(10);
    string s;
    auto q = p;
    while(cin>>s&&q!=p+10){
        alloc.construct(q++, s);
    }
    const size_t size = q - p;

    while(q!=p){
        cout << *q << endl;
        alloc.destroy(--q);
    }
    alloc.deallocate(p, 10);

    return 0;
}