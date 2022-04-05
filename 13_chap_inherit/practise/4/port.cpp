#include <iostream>
#include <cstring>
#include "Port.h"

Port::Port ()
{
    delete[] brand;
    brand = new char[5];
    strcpy (brand,"none");
    strcpy (style,"none");
    bottles = 0;
}
Port::Port (const char* br, const char * st, int b)
{
    delete[] brand;
    brand = new char[strlen(br) + 1];
    strncpy (brand,br,strlen(br));
    brand[strlen(br)] = '\0';

    strncpy (style,st,strlen(st));
    style[strlen(st)] = '\0';

    bottles = b;
}

Port::Port (const Port & p)
{
    delete[] brand;
    brand = new char[strlen(p.brand)];
    strncpy (brand,p.brand,strlen(brand));
    brand[strlen(p.brand.brand)] = '\0';

    strncpy (style,p.style,strlen(p.style));
    style[strlen(p.style)] = '\0';

    bottles = p.bottles;
}
/* //already defined.
Port :: ~Port (){  }
*/
Port& Port::operator= (const Port & p)
{
    if (this == & p)
        return *this;
    else {
        delete[] brand;
        brand = new char [strlen(p.brand) + 1];
        strncpy(brand,p.brand,strlen(p.brand));
        
        strncpy(style,p.style,strlen(p.style));
        bottles = p.bottles;
    }
    
    return *this;
}

Port& Port::operator+= (int b)
{
   bottles += b; 
   return *this;
}

Port& Port::operator-= (int b)
{
    if ( bottles >= b )
        bottles -= b; 
    else 
        bottles = 0;

    return *this;
}

void Port::Show () const
{
    std::cout << "Brand: "<< brand << endl;
    std::cout << "Kind: " << style << endl;
    std::cout << "Bottles: " << bottles << endl;
}

ostream& Port::operator<< (ostream& os, const Port& p)
{

    os << p.brand << p.style << p.bottles << endl;
    return os; 
}

// ======================================================= 
VintagePort::VintagePort () : Port ()
{
   nickname = new char[5] ;
   strcpy (nickname, "none");
   year = 0;
}

VintagePort::VintagePort (const char* br, const char* sty, int b, const char*nn, int y) : Port (br,sty, b)
{
   nickname = new char[strlen(nn) + 1]; //this is easy to forget.
   strncpy (nickname, nn, strlen(nn));
   nickname(strlen[nn]) = '\0';

   year = y;
}

VintagePort::VintagePort (const VintagePort & vp):Port(vp)
{
   delete[] nickname;
   nickname = new char[strlen(vp.nickname) + 1];
   strncpy (nickname, vp.nickname, strlen(vp.nickname));
   nickname(strlen[vp.nickname]) = '\0';
   
   year = vp.year; 
}

VintagePort& VintagePort::operator= (const VintagePort & vp)
{
    if (this == &vp)
        return *this;
   Port::operator=(vp); //easy to forget
   delete[] nickname;   //easy to forget
   nickname = new char[strlen(vp.nickname) + 1];
   strncpy (nickname, vp.nickname, strlen(vp.nickname));
   nickname(strlen[vp.nickname]) = '\0';
   
   year = vp.year; 
   
   return *this;
}

void VintagePort::Show () const
{
    Port::Show();
    iostream::cout << nickname << year << endl;
}

ostream& operator<< (ostream& os, const VintagePort& vp)
{
    os << nickname << year << endl;
    return os;
}
