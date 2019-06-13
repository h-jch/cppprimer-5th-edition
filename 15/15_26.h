#include <iostream>
#include <string>
using namespace std;

class Quote{
public:
    Quote(){
        cout << "Quote Default Constructor" << endl;
    }
    Quote(const string &book,double p):bookNo(book),price(p){
        cout << "Quote Constructor with two parameters" << endl;
    }
    Quote(const Quote &rhs):bookNo(rhs.bookNo),price(rhs.price){
        cout << "Quote Copy Constructor" << endl;
    }
    Quote &operator=(const Quote &rhs){
        cout << "Quote Copy Assignment Operator" << endl;
        price = rhs.price;
        bookNo = rhs.bookNo;
        return *this;
    }
    Quote(Quote &&rhs) noexcept:bookNo(move(rhs.bookNo)),price(move(rhs.price)){
        cout << "Quote Move Constructor" << endl;
    }
    Quote &operator=(Quote &&rhs) noexcept{
        cout << "Quote Move Assignment Operator" << endl;
        bookNo = move(rhs.bookNo);
        price = move(rhs.price);
        return *this;
    }

    virtual ~Quote(){
        cout << "Quote Destructor" << endl;
    }

    string isbn() const{
        return bookNo;
    }

    virtual double net_price(size_t n) const{
        return n * price;
    }

private:
    string bookNo;
protected:
    double price = 0.0;
};

class Bulk_quote:public Quote{
public:
    Bulk_quote(){
        cout << "Bulk_quote Default Constructor" << endl;
    }
    Bulk_quote(const string &book,double p,size_t q,double d):Quote(book,p),min_qty(q),discount(d){
        cout << "Bulk_quote Constructor with four parameters" << endl;
    }
    Bulk_quote(const Bulk_quote &rhs):Quote(rhs),min_qty(rhs.min_qty),discount(rhs.discount){
        cout << "Bulk_quote Copy Constructor" << endl;
    }
    Bulk_quote &operator=(const Bulk_quote &rhs){
        cout << "Bulk_quote Copy Assignment Operator" << endl;
        Quote::operator=(rhs);
        min_qty = rhs.min_qty;
        discount = rhs.discount;
        return *this;
    }
    Bulk_quote(Bulk_quote &&rhs):Quote(rhs),min_qty(move(rhs.min_qty)),discount(move(rhs.discount)){
        cout << "Bulk_quote Move Constructor" << endl;
    }
    Bulk_quote &operator=(Bulk_quote &&rhs) noexcept{
        cout << "Bulk_quote Move Assignment Operator" << endl;
        Quote::operator=(rhs);
        min_qty = move(rhs.min_qty);
        discount = move(rhs.discount);
        return *this;
    }

    virtual ~Bulk_quote(){
        cout << "Bulk_quote Destructor" << endl;
    }

    double net_price(size_t cnt) const override{
        if(cnt>=min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
protected:
    size_t min_qty = 0;
    double discount = 0.0;
};