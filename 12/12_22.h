#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <initializer_list>
#include <exception>
using namespace std;

class ConstStrBlobPtr;

class StrBlob{
public:
    using size_type = vector<string>::size_type;
    friend class ConstStrBlobPtr;

    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string &t) { data->push_back(t); }
    void pop_back();

    string &front();
    string &front() const;
    string &back();
    string &back() const;

    ConstStrBlobPtr begin();
    ConstStrBlobPtr end();

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const{
        if(i>=data->size())
            throw out_of_range(msg);
    }
};

StrBlob::StrBlob():data(make_shared<vector<string>>()){}

StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}

void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

string &StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

string &StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
}

string &StrBlob::back(){
    check(0,"back on empty StrBlob");
    return data->back();
}

string &StrBlob::back() const{
    check(0,"back on empty StrBlob");
    return data->back();
}

class ConstStrBlobPtr{
public:
    ConstStrBlobPtr():curr(0){}
    ConstStrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){}

    string &deref() const;
    ConstStrBlobPtr &incr();

private:
    shared_ptr<vector<string>> check(size_t i,const string &msg) const{
        auto ret = wptr.lock();
        if(!ret)
            throw runtime_error("unbound StrBlobPtr");
        if(i>=ret->size())
            throw out_of_range("msg");

        return ret;
    }
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

string &ConstStrBlobPtr::deref() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

ConstStrBlobPtr &ConstStrBlobPtr::incr(){
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

ConstStrBlobPtr StrBlob::begin(){
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::end(){
    auto ret = ConstStrBlobPtr(*this, data->size());
    return ret;
}