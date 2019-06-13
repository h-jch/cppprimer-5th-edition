class Base{
protected:
    int prot_mem;
};

class Pub_Derv:public Base{
    void memfcn(Base &b){
        b = *this;
    }
    int f(){
        return prot_mem;
    }
};

class Priv_Derv:private Base{
    void memfcn(Base &b){
        b = *this;
    }
    int f1(){
        return prot_mem;
    }
};

class Prot_Derv:protected Base{
    void memfcn(Base &b){
        b = *this;
    }
    int f2(){
        return prot_mem;
    }
};

struct Derived_from_Public:public Pub_Derv{
    void memfcn(Base &b){
        b = *this;
    }
    int use_base(){
        return prot_mem;
    }
};

struct Derived_from_Private:private Priv_Derv{
/*     void memfcn(Base &b){
        b = *this;
    }  */
};

struct Derived_from_Protected:protected Prot_Derv{
    void memfcn(Base &b){
        b = *this;
    }
};