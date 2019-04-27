#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &, const HasPtr &);
    friend void prints(const HasPtr &);
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

bool operator<(const HasPtr &lhs,const HasPtr &rhs){
    return *lhs.ps < *rhs.ps;
}

void prints(const HasPtr &h){
    cout << *h.ps << endl;
}

int main(){
    vector<HasPtr> v;
    HasPtr a("e");
    HasPtr b("b");
    HasPtr c("a");
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    for(const auto &i:v){
        prints(i);
    }

    return 0;
}