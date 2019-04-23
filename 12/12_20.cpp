#include <iostream>
#include <fstream>
#include "12_19.h"
using namespace std;

int main(){
    ifstream is("test.txt");
    StrBlob blob;
    string s;
    while(getline(is,s))
        blob.push_back(s);
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
        cout << pbeg.deref() << endl;

    return 0;
}