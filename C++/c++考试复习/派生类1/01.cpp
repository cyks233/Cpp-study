#include "01.h"
#include <iostream>
tableTennisPlayer::tableTennisPlayer(const string &fn,const string &ln,bool ht):firstName(fn),lastName(ln),hasTable(ht) {}

void tableTennisPlayer::Name() const
{
    std::cout<<lastName<<','<<firstName;
}

RatedPlayer::RatedPlayer(unsigned int r,const string &fn,const string &ln,bool ht):tableTennisPlayer(fn,ln,ht) 
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r,const tableTennisPlayer &tp):tableTennisPlayer(tp),rating(r) {}
