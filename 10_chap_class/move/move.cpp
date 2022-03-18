#include"move.h"
#include<iostream>
#include<cstring>

using namespace std;

Move :: Move (double a, double b)
{
    x = a;
    y = b;
}

void Move :: showmove () const
{
    cout << "x" << x << "y" << y << endl;
}

Move Move:: add (const Move & m)
{
    x = x + m.x;
    y = y + m.y;

    return *this;
}

void Move :: reset (double a, double b)
{
    x = a;
    y = b;
}

