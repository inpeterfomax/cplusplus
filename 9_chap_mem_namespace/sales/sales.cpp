#include<iostream>
#include"sales.h"

using namespace std;

namespace SALES
{
    void setSales(Sales& s,const double ar[], int n)
    {
        double sum = 0;
        s.max = ar[0];
        s.min = ar[0];

        if(n>=4)
        {
            for (int i = 0; i<4; i++)  
                s.sales[i] = ar[i];
        } else {
            for (int i = 0; i<n; i++) {
                s.sales[i] = ar[i];
            } 

            for (int i=n; i<4; i++) {
               s.sales[i] = 0; 
            }
        }
        for (int i = 0; i < 4; i++) {
            if (ar[i] > s.max)
                s.max = ar[i];
            if (ar[i] > s.min)
                s.min = ar[i];

            sum += ar[i];
        }
            s.average = sum / n;
    }   //setValues

    void setSales(Sales& s)
    {
        double sum = 0;
        cout << "Input sales for 4 quaters :\n";
        for (int i = 0; i < 4; i++) {
            cin >> s.sales[i];
        }
        s.max = s.sales[0];
        s.min = s.sales[0];

        for(int i = 0; i < 4; i++) {
            if (s.sales[i] > s.max)
                s.max = s.sales[i];
            if (s.sales[i] < s.min)
                s.min = s.sales[i];

            sum += s.sales[i];
        }
        s.average = sum / 4;
    }

    void showSales(const Sales& s) {
         cout << "--------------------- \n";
         cout << "sales : ";
         for (int i = 0; i < 4; i++)
         {
             cout << s.sales[i] << ' ';
         }
         cout << endl;
         cout << "average: " << s.average << endl;
         cout << "maximum: " << s.max << endl;
         cout << "minmum:  " << s.min << endl;
         cout << "----------------------- \n";
    }
}
