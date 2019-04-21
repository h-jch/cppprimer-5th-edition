#include <iostream>
#include <map>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
    map<string, size_t> word_count;
    string word;
    while(cin>>word){
        for(auto &c:word)
            c = tolower(c);
        word.erase(remove_if(word.begin(), word.end(), [](const char a){return ispunct(a);}), word.end());
        ++word_count[word];
    }
    for(const auto i:word_count)
        cout << i.first << ":" << i.second << endl;

    getchar();
    
    return 0;
}