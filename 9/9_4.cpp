#include <iostream>
#include <vector>
using namespace std;

bool findv(vector<int>::iterator vbegin,vector<int>::iterator vend,int n){
    for (; vbegin != vend;++vbegin){
        if(*vbegin==n)
            return true;
    }
    return false;
}

int main(){
    vector<int> v;
    for (int i = 0; i < 10;++i)
        v.push_back(i);
    if(findv(v.begin(),v.end(),6))
        cout << "find it" << endl;
    else
        cout << "not find it" << endl;

    return 0;
}