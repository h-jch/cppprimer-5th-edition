#include <iostream>
#include <vector>
#include <memory>
using namespace std;

shared_ptr<vector<int>> vector_generate(){
    shared_ptr<vector<int>> vptr = make_shared<vector<int>>();
    return vptr;
}

void vector_cin(shared_ptr<vector<int>> vptr){
    int n;
    cout << "please enter: " << endl;
    while(cin>>n)
        vptr->push_back(n);
}

void vector_print(shared_ptr<vector<int>> vptr){
    for(const auto &i:*vptr)
        cout << i << " ";
    cout << endl;
}

int main(){
    auto ptr = vector_generate();
    vector_cin(ptr);
    vector_print(ptr);

    return 0;
}