#include "vector.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

int main () 
{
    using namespace std;
    using VECTOR::Vector;

    srand (time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit):";
    while (cin >> target)
    {
        cout << "Enter steps length: ";
        if (!(cin >> dstep))
            break;

        while (result.magvalue() < target)
        {
            direction = rand() % 360;
            step.set (dstep,direction,'p');
            result = result + step;
            steps ++;
        }
        cout << "After " << steps << " steps, the subject has the following locations : \n";
        cout << result << endl;
        result.polar_mode();
        cout << result << endl;
        cout << "Average outward distance per step = " << result.magvalue()/steps << endl;
        steps = 0;
        result.set(0.0,0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye! \n";
    
    return 0;
}

