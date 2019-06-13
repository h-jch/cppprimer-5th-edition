#include <string>
using namespace std;

class Flower{
public:
    Flower() = default;
    Flower(const string &n, double p) : name(n), price(p){}
    virtual double net_price() const = 0;

protected:
    double price;

private:
    string name;
};

class Rose:public Flower{
public:
    Rose() = default;
    Rose(const string &n, double p, size_t q) : Flower(n, p), quantity(q){}
    double net_price() const override{
        return quantity * price;
    }

protected:
    size_t quantity;
};

class Disc_Rose:public Rose{
public:
    Disc_Rose() = default;
    Disc_Rose(const string &n, double p, size_t q, double dis) : Rose(n, p, q), discount(dis){}
    double net_price() const override{
        return quantity * price * (1 - discount);
    }

protected:
    double discount;
};