#include<iostream>
#include"plorg.h"

using namespace std;

int main ()
{
    Plorg p1;
    p1.showName();
    Plorg p2 = Plorg(16,"Pflower");
    p2.showName();

    cout << "--------------------" << endl;
    
    p1.setName("Pbarbeque");
    p1.showName();

    return 0;
}
