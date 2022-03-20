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
    Time total3;
    Time total4;

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

    total3 = fixing*13;
    cout << "fixing * 13 = ";
    total3.Show();
    cout << endl;


    total4 = 13*fixing;
    cout << "13 * fixing = ";
    total4.Show();
    cout << endl;

    //cout << "totoal4 is " << total4 << endl;

    return 0;
}
