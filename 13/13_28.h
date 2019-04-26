#include <string>
using namespace std;

class TreeNode{
public:
    TreeNode():value(string()),count(new int(1)),left(nullptr),right(nullptr){}
    TreeNode(const TreeNode &rhs):value(rhs.value),count(rhs.count),left(rhs.left),right(rhs.right){
        ++*count;
    }
    TreeNode &operator=(const TreeNode &rhs){
        ++*rhs.count;
        if(--*count==0){
            if(left){
                delete left;
                left = nullptr;
            }
            if(right){
                delete right;
                right = nullptr;
            }
            delete count;
            count = nullptr;
        }
        value = rhs.value;
        count = rhs.count;
        left = rhs.left;
        right = rhs.right;
        return *this;
    }
    ~TreeNode(){
        if(--*count==0){
            if(left){
                delete left;
                left = nullptr;
            }
            if(right){
                delete right;
                right = nullptr;
            }
            delete count;
            count = nullptr;
        }
    }

private:
    string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree{
public:
    BinStrTree():root(new TreeNode()){}
    BinStrTree(const BinStrTree &rhs):root(new TreeNode(*rhs.root)){}
    BinStrTree &operator=(const BinStrTree &rhs){
        TreeNode *p = new TreeNode(*rhs.root);
        delete root;
        root = p;
        return *this;
    }
    ~BinStrTree(){
        delete root;
    }
private:
    TreeNode *root;
};