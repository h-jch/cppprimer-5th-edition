#include <iostream>
#include <vector>
using namespace std;

vector<int> *vector_generate(){
    vector<int> *vptr = new vector<int>();
    return vptr;
}

void vector_cin(vector<int> *vptr){
    int n;
    cout << "please enter: " << endl;
    while(cin>>n)
        vptr->push_back(n);
}

void vector_print(vector<int> *vptr){
    for(const auto &i:*vptr)
        cout << i << " ";
    cout << endl;
}

int main(){
    auto ptr = vector_generate();
    vector_cin(ptr);
    vector_print(ptr);
    delete ptr;

    return 0;
}