#include <iostream>
using namespace std;

int main(){
    cout << sizeof(bool) << " " << sizeof(char) << " " << sizeof(short) << " " << sizeof(int) << " "
         << sizeof(long) << " " << sizeof(long long) << " " << sizeof(float) << " " << sizeof(double) << " "
         << sizeof(long double) << " " << sizeof(int *) << endl;

    return 0;
}