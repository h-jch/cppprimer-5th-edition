#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, size_t> words_count;
    string word;
    while(cin>>word){
        auto it = words_count.insert({word, 1});
        if(!it.second){
            ++it.first->second;
        }
    }

    for(auto i:words_count)
        cout << i.first << ":" << i.second << endl;

    return 0;
}