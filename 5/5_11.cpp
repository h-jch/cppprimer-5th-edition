#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, blank = 0, t = 0, e = 0;
    getline(cin, s);
    for(auto c:s){
        switch(c){
            case 'a':
            case 'A':
                aCnt++;
                break;
            case 'e':
            case 'E':
                eCnt++;
                break;
            case 'i':
            case 'I':
                iCnt++;
                break;
            case 'o':
            case 'O':
                oCnt++;
                break;
            case 'u':
            case 'U':
                uCnt++;
                break;
            case ' ':
                blank++;
                break;
            case '\t':
                t++;
                break;
            case '\n':
                e++;
                break;
        }
    }
    cout << "a: " << aCnt << endl
         << "e: " << eCnt << endl
         << "i: " << iCnt << endl
         << "o: " << oCnt << endl
         << "u: " << uCnt << endl
         << "blank: " << blank << endl
         << "\\t: " << t << endl
         << "\\n: " << e << endl;

    return 0;
}