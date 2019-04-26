#include <string>
using namespace std;

class Employee{
public:
    Employee() { id = id_increment++; }
    Employee(const string &s) : name(s) { id = id_increment++; }
    Employee(const Employee &) = delete;
    Employee &operator=(const Employee &) = delete;
    int getId() { return id; }

private:
    string name;
    int id;
    static int id_increment;
};

int Employee::id_increment = 0;