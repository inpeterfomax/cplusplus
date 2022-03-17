#ifndef __SALES_H__
#define __SALES_H__

namespace SALES
{
    static const int QUARTERS = 4; 

    class Sales 
    {
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;

        public: 
            Sales (const double ar[],int n);
            Sales (const Sales& s);
            Sales ();
            void showSales ();
    };
}

#endif
