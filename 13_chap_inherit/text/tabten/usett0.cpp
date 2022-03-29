#include <iostream>
#include "tabtenn0.h"

int main(void)
{
    using std::cout;
    using std::endl;

    TableTennisPlayer player1 ("Tara","Boomdea",false);
    
    RatedPlayer rplayer1 (1140,"Mallory","Duck",true);

   
    player1.Name();
    if (player1.HasTable())
    {
        cout << ": has a table \n";
    } else 
    {
        cout << ": hasn't a table \n";
    }

    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating : " << rplayer1.Rating() << endl;
    
    RatedPlayer rplayer2 (1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;


    TableTennisPlayer & rt = rplayer1;
    TableTennisPlayer *pt = &rplayer1;
    rt.Name();
    pt->Name();
    
    cout << "\n #3 =====================" << endl;

    cout << "To show () :" << endl;
    player1.Show(player1);
    rplayer1.Show(rplayer1);

    return 0;
}
