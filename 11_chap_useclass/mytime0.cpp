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

Time Time :: operator - (const Time & t) const
{
    Time sub;
    int borrow; 

    if (hours > t.hours)
    {
        if (minutes >= t.minutes) {
            sub.minutes = minutes - t.minutes;
        } else {
            borrow = 1;
            sub.minutes = minutes - t.minutes + 60;
        }
    } else if (hours == t.hours) {
        if (minutes >= t.minutes) {
            sub.minutes = minutes - t.minutes;
        } else {
            cout << "wrong sub-number : " << t.Show() << endl;
        }
    } else {
        cout << "wrong sub-number : " << t.Show() << endl;
    }

    return sum;
}

Time Time :: operator * (double num)
{
   Time a;
   int extra;
    
   extra = (minutes * num) / 60;

   a.minutes = (minutes * num) % 60;
   a.hours = hours * num + extra;

   return a;
}

