#include "vector.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>

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

    ofstream file;
    file.open("history.txt");
    
    if (!file.is_open())
    {
        cout << "Open file failed" << endl;
        exit(-1);
    }

    cout << "Enter target distance (q to quit):";

    while (cin >> target)
    {
        cout << "Enter steps length: ";
        if (!(cin >> dstep))
            break;

        //write the target distance and step length into file 
        file << "Target distance" << target << "step lenght " << dstep << endl;

        while (result.magvalue() < target)
        {
            file << steps <<": (x, y) = (" << result.xvalue() << ", " << result.yvalue() << ")\n";

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


        file << steps <<": (x,y) = (" << result.xvalue() << ", " << result.yvalue() << ")\n";
		file << "After " << steps << " steps, the subject has the following location:\n";
		file << "(x, y) = (" << result.xvalue() << ", " << result.yvalue() << ")" << "\nor\n";
		file << "(m, a) = (" << result.magvalue() << ", " << result.angvalue() << ")\n";
		file << "Average outward distance per step = " << result.magvalue() / steps << endl ;
    }

    cout << "Bye! \n";
    
    return 0;
}


