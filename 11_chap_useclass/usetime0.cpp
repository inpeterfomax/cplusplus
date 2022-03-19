#include<iostream>
#include"mytime0.h"


int main ()
{
    using std::cout;
    using std::endl;

    Time planning(3,40);
    Time coding(2,40);
    Time fixing(5,55);
    Time total;
    Time total2;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    total2 = planning + coding + fixing;
    cout << "planning + coding + fixing = ";
    total2.Show();
    cout << endl;

    return 0;
}
