#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> pt(new int(3));
//    unique_ptr<int> p1(pt);
//    unique_ptr<int> p2 = pt;
    cout << *pt << endl;
    pt.reset();

    return 0;
}