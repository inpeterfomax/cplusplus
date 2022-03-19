#ifndef __PLORG__H__
#define __PLORG__H__

class Plorg {
private:
    enum {MAX=19};
    int CI;
    char name[MAX];
public:
    //Plorg();
    Plorg(int ci = 50, const char* pname = "Plorga");
    void showName();
    void setValue(int value);
    void setName(const char* pname);
};

#endif
