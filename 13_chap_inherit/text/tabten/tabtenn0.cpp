#include "tabtenn0.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

TableTennisPlayer :: TableTennisPlayer (const char* fn, const char* ln, bool ht)
{
    std::strncpy (firstname,fn,LIM-1);
    firstname[LIM-1] = '\0';
    std::strncpy (lastname,ln,LIM-1);
    lastname[LIM-1] = '\0';

    hasTable = ht;
   cout << "#1 This is TableTennisPlayer constructor" << endl; 
}

void TableTennisPlayer::Name()const
{
    std::cout << lastname << "," << firstname;
}

TableTennisPlayer :: ~TableTennisPlayer ()
{
    cout << "#2 This is the ~TableTennisPlayer() function" << endl;
}

void TableTennisPlayer::Show (const TableTennisPlayer & rt)
{
   cout << "Name: ";
   rt.Name();
   cout << "\nTable : ";
   
   if (rt.HasTable())
       cout << "Yes\n";
   else
       cout << "No \n";
}
/* ==================================================================================== */

RatedPlayer :: RatedPlayer (unsigned int r, const char* fn, 
        const char* ln, bool ht): TableTennisPlayer (fn,ln,ht)
{
   rating = r;
   cout << "#3 This is RatedPlayer constructor" << endl; 
}

RatedPlayer :: RatedPlayer (unsigned int r, const TableTennisPlayer & tp) 
    : TableTennisPlayer (tp)
{
    rating = r;
}
RatedPlayer :: ~RatedPlayer()
{
   cout << "#4 This is ~RatedPlayer() function" << endl; 
}
