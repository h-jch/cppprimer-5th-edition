#include <iostream>
#include <map>
#include <set>
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
    map<string, multiset<string>> order_authors;
    for(const auto &author:author_to_work)
        order_authors[author.first].insert(author.second);
    for(const auto &author:order_authors){
        cout << author.first << ": ";
        for(const auto &work:author.second)
            cout << work << " ";
        cout << endl;
    }

    getchar();

    return 0;
}