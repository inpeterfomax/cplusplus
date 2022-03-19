#ifndef __MYTIME0_H__
#define __MYTIME0_H__
#include<iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin (int m);
    void AddHr (int h);
    void Reset (int h = 0, int m = 0);
    Time Sum (const Time & t) const;
    Time operator + (const Time & t) const;
    Time operator - (const Time & t) const;
    Time operator * (double n) const;
    void Show ()const;
    friend Time operator * (double n,const Time & t); //const;

    //friend void operator << (ostream & os, const Time & t);
    //friend std::ostream & operator << (std::ostream & os, const Time & t);
};

#endif 
