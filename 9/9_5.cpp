#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator findv(vector<int>::iterator vbegin,vector<int>::iterator vend,int n){
    for (; vbegin != vend;++vbegin){
        if(*vbegin==n)
            return vbegin;
    }
    return vend;
}

int main(){
    vector<int> v;
    for (int i = 0; i < 10;++i)
        v.push_back(i);
    vector<int>::iterator p = findv(v.begin(), v.end(), 6);
    if(p==v.end())
        cout << "not found" << endl;
    else
        cout << "found it" << endl;

    return 0;
}