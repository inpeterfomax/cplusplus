#include "cow.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Cow :: Cow ()
{
    for (int i = 0; i < 20 ; i++)
    {
        name [i] = '\0';
    }
    hobby = NULL;
    weight = 0;
    cout << "default constructor" << endl;
}

Cow :: Cow (const char *nm, const char *ho, double wt)
{
    if (nm == NULL)
    {
        cout << "null issue " << endl;
        return;
    }
    else 
    {
        strncpy (name,nm,strlen(nm));
    }

    if (ho == NULL)
        return;
    else 
    {
        hobby = new char[128];
        strncpy (hobby,ho,strlen(ho));
    }

    weight = wt;
}

Cow :: Cow (const Cow &w)
{
    if (w.name == NULL)
        return;
    else 
    {
        strncpy (name,w.name,20);
    }

    if (w.hobby == NULL)
        return;
    else 
    {
        hobby = new char[128];
        strncpy (hobby,w.hobby,strlen(w.hobby));
    }
    weight = w.weight;
    
}

Cow :: ~Cow ()
{
   //delete[] name;
   delete[] hobby;
   //hobby = NULL; 
   cout << "this is ~Cow" << endl;
}

Cow & Cow :: operator= (const Cow &c)
{
   if (this==&c)
       return *this;
   strncpy(name,c.name,strlen(c.name));
   hobby = new char[128];
   strncpy (hobby,c.hobby,strlen(c.hobby));
   weight = c.weight;

   //return c;
   return *this;
}

void Cow :: ShowCow() const
{
    cout << "name : " << name ;
    cout << " hobby : " << hobby ;
    cout << " weight : " << weight ;
    cout << endl;
}
