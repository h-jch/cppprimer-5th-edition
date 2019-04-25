#include <string>
using namespace std;

class HasPtr{
public:
    HasPtr(const string &s=string()):ps(new string(s)),i(0){}
    HasPtr(const HasPtr &rhs):ps(new string(*(rhs.ps))),i(rhs.i){}
    ~HasPtr(){
        delete ps;
    }
    HasPtr &operator=(const HasPtr &rhs){
        string *p = new string(*(rhs.ps));
        delete ps; //first free old space. Must have this sentence.
        ps = p;    //then point to new space
        i = rhs.i;
        return *this;
    }
private:
    string *ps;
    int i;
};