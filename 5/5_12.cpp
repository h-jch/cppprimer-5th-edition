#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, blank = 0, t = 0, e = 0, ff = 0, fl = 0, fi = 0;
    bool f = 0;
    getline(cin, s);
    for(auto c:s){
        switch(c){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
                if(f==1){
                    ++fi;
                    f = 0;
                }
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++blank;
                break;
            case '\t':
                ++t;
                break;
            case '\n':
                ++e;
                break;
            case 'f':
                if(f==1){
                    ++ff;
                    f = 0;
                }
                f = 1;
                break;
            case 'l':
                if(f==1){
                    ++fl;
                    f = 0;
                }
        }
    }
    cout << "a: " << aCnt << endl
         << "e: " << eCnt << endl
         << "i: " << iCnt << endl
         << "o: " << oCnt << endl
         << "u: " << uCnt << endl
         << "blank: " << blank << endl
         << "\\t: " << t << endl
         << "\\n: " << e << endl
         << "ff: " << ff << endl
         << "fl: " << fl << endl
         << "fi: " << fi << endl;

    return 0;
}