#include <string>
#include <set>
#include "13_36.h"
using namespace std;

class Folder;

class Message{
    friend class Folder;
public:
    Message(const string &str=""):contents(str){}
    Message(const Message &m):contents(m.contents),folders(m.folders){
        add_to_Folders(m);
    }
    Message &operator=(const Message &rhs){
        remove_from_Folders();
        contents = rhs.contents;
        folders = rhs.folders;
        add_to_Folders(rhs);
        return *this;
    }
    ~Message(){
        remove_from_Folders();
    }
    void save(Folder &);
    void remove(Folder &);

private:
    string contents;
    set<Folder*> folders;
    void add_to_Folders(const Message &);
    void remove_from_Folders();
};

void Message::save(Folder &f){
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f){
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &m){
    for(auto f:m.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders(){
    for(auto f:folders)
        f->remMsg(this);
}