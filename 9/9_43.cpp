#include <iostream>
#include <string>
using namespace std;

void change(string &s,const string &oldVal,const string &newVal){
    auto p = s.begin();
    while(p!=s.end()){
        if(string{p,p+oldVal.size()}==oldVal){
            p = s.erase(p, p + oldVal.size());
            p = s.insert(p, newVal.begin(),newVal.end());
            advance(p, newVal.size());
        }
        else{
            ++p;
        }
    }
}


int main(){
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        change(str, "thru", "through");
        change(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{
            "To drive straight thruthru is a foolish, thotho courageous act."};
        change(str, "thru", "through");
        change(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        change(str, "thru", "thruthru");
        change(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        change(str, "world",
                "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
    return 0;
}