#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[] = "Hello, ", s2[] = "world!";
    char s[100];
    strcpy(s, s1);
    strcat(s, s2);
    cout << s << endl;

    return 0;
}