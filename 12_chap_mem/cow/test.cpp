#include "cow.h"

#include <iostream>

using namespace std;

int main () 
{
    Cow c1;
    Cow c2("apple","sleep",1000); 
    c2.ShowCow();
    Cow c3(c2);
    c3.ShowCow();

    c1 = c3;    //fuzhi gouzao
    c1.ShowCow();
}
