#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class HasPtr{
public:
    friend void swap(HasPtr &, HasPtr &);
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
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

inline void swap(HasPtr &lhs,HasPtr &rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    cout << "call the swap function" << endl;
}