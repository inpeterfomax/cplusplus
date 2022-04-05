#ifndef  __PORTA__
#define  __PORTA__
class Port
{
private:
    char * brand;
    char style[20];
    int bottles;
public:
    Port (const char* br = "none", const char * st = "none", int b = 0);
    Port (const Port& p);
    Port ();
    virtual ~Port () { delete [] brand }
    Port& operator= (const Port& p);
    Port& operator+= (int b);
    Port& operator-= (int b);
    int BottleCount () const { return bottles; }
    virtual void Show () const;
    friend ostream& operator<< (ostream& os, const Port& p);
};

class VintagePort: public Port
{
private:
    enum {LEN=128};
    char* nickname;
    int year;
public:
    VintagePort ();
    VintagePort (const char* br, const char* sty,int b, const char* nn, int y);
    VintagePort (const VintagePort & vp);
    ~VintagePort () { delete [] nickname }
    VintagePort & operator= (const VintagePort & vp);
    virtual void Show () const;
    friend ostream& operator<< (ostream& os, const VintagePort& vp);
};
#endif
