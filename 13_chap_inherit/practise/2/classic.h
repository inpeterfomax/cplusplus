#ifndef __CLASSIC_H_
#define __CLASSIC_H_

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    enum {MAX=128};
    Cd (char *s1, char* s2, int n, double x);
    Cd (const Cd & d);
    Cd () {};
    virtual void Report() const;
    Cd & operator= (const Cd & d);
    virtual ~Cd();
};

class Classic : public Cd
{
private:
   char *composition;
public:
   Classic ():Cd() {};
   Classic (char* s3,char *s1, char* s2, int n, double x);
   Classic (char * s3, Cd &c1);
   virtual ~Classic();
   virtual void Report () const;
   Classic & operator= (const Classic & d);
};

#endif
