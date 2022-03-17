#include<iostream>
#include"sales.h"

using namespace std;

int main()
{
    using namespace SALES;
   
    const double alldata [4] = {15.6,20.8,12.3,45.2};

    Sales* sa = new Sales(alldata,4);
    sa->showSales();

    Sales sb;

    free(sa);
    sa = NULL;

    return 0;
}
