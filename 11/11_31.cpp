#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    multimap<string, string> author_to_work{{"a", "xx"},
                                           {"b", "yy"},
                                           {"a", "zz"},
                                           {"c", "tt"},
                                           {"b", "qq"},
                                           {"c", "cpp"},
                                           {"b", "qq"}};
    string author = "b";
    string work = "qq";

    for (auto found = author_to_work.find(author); found != author_to_work.end() && found->first == author;){
        if(found->second==work)
            found = author_to_work.erase(found);
        else
            ++found;
    }

    for(auto i:author_to_work)
        cout << i.first << " " << i.second << endl;

    return 0;
}