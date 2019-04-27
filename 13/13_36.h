#include "13_34.h"
class Folder{
public:
    Folder();
    Folder(const Folder &);
    Folder &operator=(const Folder &);
    ~Folder();


private:
    set<Message *> msgs;
    void addMsg(Message *m){
        msgs.insert(m);
    }
    void remMsg(Message *m){
        msgs.erase(m);
    }
};