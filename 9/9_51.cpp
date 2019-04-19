#include <iostream>
#include <string>
#include <array>
using namespace std;

array<string,12> month_names{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

class Date{
private:
    unsigned year, month, day;
    unsigned month_from_name(const string &str);
public:
    Date(const string &str="");
    void print();
};

unsigned month_from_name(const string &str){
    if(str.empty())
        return 0;
    if(isdigit(str[0]))
        return stoi(str);
    for (size_t i = 0; i != 12;++i){
        if(str.find(month_names[i])!=string::npos)    //found it
            return i + 1;
    }
    return 0;    //not found
}

Date::Date(const string &str){
    if(str.empty())
        return;
    std::string delimiters{" ,/"};
    auto month_day_delim_pos = str.find_first_of(delimiters);
    if (month_day_delim_pos == std::string::npos)
       throw std::invalid_argument("This format is not supported now.");
    month = month_from_name(str.substr(0, month_day_delim_pos));
    auto day_year_delim_pos = str.find_first_of(delimiters, month_day_delim_pos + 1);
    auto day_len = day_year_delim_pos - month_day_delim_pos - 1;
    day = std::stoi(str.substr(month_day_delim_pos + 1, day_len));
    year = std::stoi(str.substr(day_year_delim_pos + 1));
}

void Date::print(){
    cout << year << "-" << month << "-" << day << endl;
}

int main()
{
    { //  default case
        auto date = Date();
        date.print();
    }
    { //  case 0: January 1, 1900
        auto date = Date("January 1, 1900");
        date.print();
    }
    { //  case 1: 1/1/1900
        auto date = Date("1/1/1900");
        date.print();
    }
    { //  case 2: Jan 1, 1900
        auto date = Date("Jan 1, 1900");
        date.print();
    }
}