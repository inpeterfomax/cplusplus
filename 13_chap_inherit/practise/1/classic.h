#ifndef __CLASSIC_H_
#define __CLASSIC_H_

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd (char *s1, char* s2, int n, double x);
    Cd (const Cd & d);
    Cd () {};
    virtual void Report() const;
    Cd & operator= (const Cd & d);

};

class Classic : public Cd
{
private:
   char composition[100];
public:
   Classic ():Cd() {  };
   Classic (char* s3,char *s1, char* s2, int n, double x);
   Classic (char * s3, Cd &c1);
   virtual void Report () const;
   Classic & operator= (const Classic & d);
};

#endif
