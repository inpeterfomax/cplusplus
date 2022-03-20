#ifndef __VECTOR__H__ 
#define __VECTOR__H__ 

namespace VECTOR 
{
    class Vector 
    {
        private : 
            double  x;
            double  y;
            double mag;
            double ang;
            char mode;
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public : 
            Vector ();
            Vector (double n1, double n2, char form = 'r');
            void set(double n1, double n2, char form = 'r');
            ~Vector ();
            double xvalue () const { return x; }
            double yvalue () const { return y; }
            double magvalue () const { return mag; }
            double angvalue () const { return ang; }
            void polar_mode();
            void rect_mode();
            Vector operator+ (const Vector & b) const;
            Vector operator- (const Vector & b) const;
            Vector operator- () const;
            Vector operator* (double n) const;

            friend Vector operator* (double n, const Vector & a);
            friend void operator << (std::ostream & os, const Vector & v);

    };
}

#include <iostream>
#endif // __VECTOR__H__ 
