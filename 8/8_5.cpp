#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ifstream is("test.txt");
    string s;
    vector<string> v;
    if(is){
        while(is>>s){
            v.push_back(s);
        }
    }
    else{
        cerr << "the file cannot be opened" << endl;
    }
    for(auto c:v)
        cout << c << endl;

    return 0;
}