#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<string> unique_words;
    string s;
    while(cin>>s){
        if(find(unique_words.begin(),unique_words.end(),s)==unique_words.end())
            unique_words.push_back(s);
    }
    for(auto i:unique_words)
        cout << i << " ";
    cout << endl;

    return 0;
}