#ifndef __MYTIME0_H__
#define __MYTIME0_H__

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
};

#endif 