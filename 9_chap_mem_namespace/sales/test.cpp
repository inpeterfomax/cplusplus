#include<iostream>
#include"sales.h"

using namespace std;

int main()
{
    using namespace SALES;
    Sales s1, s2;
    double ar[5] = {101, 50.4,90.5,98.2,78.6};
    setSales(s2, ar, 3);
    showSales(s2);
    setSales(s1);
    showSales(s1);

    return 0;
}
