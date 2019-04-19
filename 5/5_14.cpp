#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t, smax;
    int max = 0, tmp = 1;
    bool con = 0;
    while(cin>>s){
        if(t==s){
            ++tmp;
            con = 1;
        }
        else{
            if(max<tmp){
                max = tmp;
                smax = t;
            }
            tmp = 1;
        }
        t = s;
    }
    if(con==1)
        cout << smax << ": " << max << endl;
    else
        cout << "no continous word." << endl;

    return 0;
}