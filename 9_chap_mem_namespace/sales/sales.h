#ifndef  __SALES_H__
namespace SALES
{
    const int QUARTERS = 4;

    struct Sales {
        double sales [QUARTERS];
        double min;
        double max;
        double average;
        
    };

    void setSales(Sales& s, const double ar[],int n);
    void setSales(Sales& s);
    void showSales(const Sales& s);

}



#define __SALES_H__

#endif
