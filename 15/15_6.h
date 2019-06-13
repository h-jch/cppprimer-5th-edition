#include <iostream>
#include <string>
using namespace std;

class Quote{
public:
    Quote() = default;
    Quote(const string &b,double p):bookNo(b),price(p){}
    string isbn() const { return bookNo; }
    virtual double net_price(size_t n) const { return n * price; }
    virtual ~Quote() = default;
private:
    string bookNo;
protected:
    double price = 0.0;
};

double print_total(ostream &os,const Quote &item,size_t n){
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

class Bulk_quote:public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const string &book,double p,size_t qty,double dis):Quote(book,p),min_qty(qty),discount(dis){}
    virtual double net_price(size_t cnt) const{
        if(cnt>=min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }

protected:
    size_t min_qty = 0;
    double discount = 0.0;
};