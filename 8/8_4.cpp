#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main(){
    fstream is("test.txt");
    vector<string> v;
    string s;
    if(is){
        while(getline(is,s))
            v.push_back(s);
    }
    else{
        cerr << "the file cannot be opened" << endl;
    }
    is.close();
    for(auto c:v)
            cout << c << endl;

    return 0;
}