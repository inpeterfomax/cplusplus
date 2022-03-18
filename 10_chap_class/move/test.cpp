#include "move.h"
#include <iostream>

using namespace std;

int main()
{
   Move m1;
   //Move m2 = Move(10,20);
   //Move m3 = Move(30,40);

   Move* m2 = new Move(10,20);
   Move* m3 = new Move(30,40);

   //m3.showmove();
   m3->showmove();
   cout << "-----------------"  << endl;
   //m3.add(m2);
   m3->add(*m2);
   //m3.showmove();
   m3->showmove();
   cout << "-----------------"  << endl;
   //m2.showmove();
   m2->showmove();

    cout << "delete ----------------"  << endl;
    delete(m2);
    delete(m3);

   return 0;
}
