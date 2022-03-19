#include"mytime0.h"
#include<iostream>
#include<cstring>

using namespace std;

Time :: Time () {
    hours = 0;
    minutes = 0;
}

Time :: Time (int h, int m)
{
    hours = h;
    minutes = m;
}

void Time :: AddMin (int m)
{
    minutes += m;
    cout << "doesn't need to consider minutes?" << endl;
}

void Time :: AddHr (int h)
{
    hours += h;
}

void Time :: Reset (int h , int m )
{
    minutes = m;
    hours = h;
}

Time Time :: Sum (const Time & t) const
{
    Time a;
    int extra = 0;

    a.minutes = minutes + t.minutes;
    if (a.minutes / 60) {
        extra = a.minutes / 60; 
        a.minutes = a.minutes % 60;
    } else {
        a.minutes = t.minutes + minutes;
    }
        
    a.hours = t.hours + extra + hours;

    return a;
}

void Time :: Show () const 
{
    cout << "hours: "<< hours << " minutes : " << minutes << endl;
}

Time Time :: operator + (const Time & t) const
{
    Time sum;
    int extra; 

    sum.minutes = t.minutes + minutes;
    if (sum.minutes / 60) {
        extra = sum.minutes / 60;
        sum.minutes = sum.minutes % 60;
    }
    sum.hours = t.hours + hours + extra;

    return sum;
}


