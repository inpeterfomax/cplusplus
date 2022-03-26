#include <iostream>
#include <cstring>

using std::ostream;

class Nifty
{
private:
    //data
    enum { MAXLEN = 100 };
    const int perlen;
    //char personality[perlen];
    char personality[MAXLEN];
    int talents;
public:
    //methods
    Nifty();
    Nifty(char *s);
    ~Nifty();
    Nifty operator+ (const Nifty & a) const;
   friend ostream & operator<< (ostream & os, Nifty & n);
};

Nifty :: Nifty() : perlen(100)
{
    for (int i=0; i<MAXLEN; i++)
    {
        personality[i] = '\0';
    }

    talents = 0;
}

Nifty :: Nifty (char *s) : perlen(100)
{
       strncpy(personality,s,strlen(s));
       talents = 0;
}

Nifty :: ~Nifty ()
{
    if (personality != NULL)
        delete[](personality);
}

Nifty Nifty :: operator+ (const Nifty &a) const
{
    Nifty b;
    
    if (a.personality != NULL)
    {
        strncpy (b.personality,a.personality,strlen(a.personality));
        strncpy (b.personality + strlen(a.personality),personality,strlen(personality));   
    }

    b.talents = a.talents + talents;

    return b;
}


ostream & operator << (ostream & os, Nifty & n)
{
    os << n;

    return os;
}
