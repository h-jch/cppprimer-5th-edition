#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main(){
    string s;
    int i;
    vector<pair<string,int>> v;
    while(cin>>s>>i){
        v.push_back(pair<string, int>(s, i));
    }

    for(auto c:v)
        cout << c.first << " " << c.second << endl;

    return 0;
}