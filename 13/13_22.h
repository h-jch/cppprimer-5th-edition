#include <string>
using namespace std;

class HasPtr{
public:
    HasPtr(const string &s=string()):ps(new string(s)),i(0){}
    HasPtr(const HasPtr &rhs){
        ps = new string(*(rhs.ps));
        i = rhs.i;
    }
    HasPtr &operator=(const HasPtr &rhs){
        string *p = new string(*(rhs.ps));
        delete ps;
        ps = p;
        i = rhs.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }

private:
    string *ps;
    int i;
};