//#include "singleton.h"

class TheOnlyInstance
{
public:
    static TheOnlyInstance* GetTheOnlyInstance();
protected:
    TheOnlyInstance () {}
private:
    int a;
};

TheOnlyInstance* TheOnlyInstance :: GetTheOnlyInstance ()
{
    static TheOnlyInstance objTheOnlyInstance;
    return &objTheOnlyInstance;
}

int main ()
{
    TheOnlyInstance noCanDo;
    
    return 0;
}
