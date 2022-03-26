#include "Golfer.h"
#include <iostream>
#include <cstring>

using std::cout;

Golfer :: Golfer ()
{
    fullname = NULL;
    games = 0;
    scores = NULL;
    cout << " default constructors " << endl;
}

Golfer :: Golfer (const char *name , int g=0)
{
    if (name == NLL)
        return;
    else 
    {
       strncpy(fullname,name,strlen(name)) ;
       games = g
    }
    cout << " * name, g=0  parameter" << endl;
}

Golfer :: Golfer (const Golfer * g)
{
   if (g == NULL) 
       return;
   else
   {
        if (g->fullname == NULL)
        {
            return;
        } else 
        {
            strncpy(fullname,name,strlen(name)) ;
            games = g->games;
        }
   }


    cout << " * g parameter" << endl;
}

Golfer :: ~Golfer ()
{

}
