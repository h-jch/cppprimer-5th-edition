#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ifstream is("test.txt");
    vector<string> v;
    if(is){
        string s;
        while(getline(is,s)){
            v.push_back(s);
        }
    }
    else{
        cerr << "the file cannot be opened" << endl;
    }
    for(auto c:v){
        istringstream in(c);
        string word;
        while(in>>word){
            cout << word << endl;
        }
    }

    return 0;
}