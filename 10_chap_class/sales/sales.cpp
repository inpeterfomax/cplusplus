#include <iostream>
#include <cstring>
#include "sales.h"
using namespace std;

namespace SALES
{
    //constructor with patameters
    Sales::Sales(const double ar[],int n)
    {
        double sum = 0;
        max = ar[0];
        min = ar[0];
        average = ar[0];
        int i = 0;

        cout << "Constructor with two parameters .."  << endl;
        if (n > 4)
        {
            for( i=0; i<4; i++ ) {
                sales[i] = ar[i];
                if (ar[i] > max)
                    max = ar[i];
                if (ar[i] < min) 
                    min = ar[i]; 

                sum += ar[i];

            }
        } else {
            for (i=0;i<n;i++) {
                sales[i] = ar[i];
                if (ar[i] > max)
                    max = ar[i];
                if (ar[i] < min)
                    min = ar[i];
                
                sum += ar[i];
            
            }
        }
        average = sum / n;
    }
    //copy_constructible
    Sales::Sales(const Sales& s)
    {
        cout << "Constructor with one parameters .."  << endl;
        this->max = s.max;
        this->min = s.min;
        this->average = s.average;
        for(int i=0;i++;i<4)
            this->sales[i] = s.sales[i];
    }
    //default_constructible_
    Sales::Sales()
    {
        cout << "Constructor without parameters .."  << endl;
    }

    void Sales::showSales()
    {
        int i = 0;
        cout << "min : " << min << endl;
        cout << "max : " << max << endl;
        cout << "average : " << average << endl;
        
        cout << "all data : " ;
        for ( i; i<4; i++ ){
            cout << this->sales[i] << "-";
        }
       
        cout << endl;
    }
}
