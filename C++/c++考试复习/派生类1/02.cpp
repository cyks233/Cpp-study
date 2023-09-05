#include <iostream>
#include "01.h"
using namespace std;
int main()
{
    tableTennisPlayer player1("Tara","Boomdea",false);
    RatedPlayer rplayer1(1104,"Mallory","Durk",true);
    rplayer1.Name();
    if (rplayer1.HasTable())
    {
        cout<<": has a table."<<endl;
    }
    else
    {
        cout<<": hasn't a table."<<endl;
    }
    player1.Name();
    if (player1.HasTable())
    {
        cout<<": has a table."<<endl;
    }
    else
    {
        cout<<": hasn't a table."<<endl;
    }
    cout<<"name: ";
    rplayer1.Name();
    cout<<"; rating: "<<rplayer1.Rating()<<endl;
    RatedPlayer rplayer2(1212,player1);
    cout<<"name: ";
    rplayer2.Name();
    cout<<"; rating: "<<rplayer2.Rating()<<endl;
    return 0;
}