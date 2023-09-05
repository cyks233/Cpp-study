#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;
class tableTennisPlayer
{
    private:
        string firstName;
        string lastName;
        bool hasTable;
    public:
        tableTennisPlayer(const string & fn="none",const string & ln="none",bool ht =false);
        void Name() const;
        bool HasTable()const {return hasTable;};
        void ResetTable(bool v) {hasTable =v;};
};
class RatedPlayer:public tableTennisPlayer
{
    private:
        unsigned int rating;
    public:
        RatedPlayer(unsigned int r =0,const string & fn ="none",const string & ln="none",bool ht =false);
        RatedPlayer(unsigned int r,const tableTennisPlayer & tp);
        unsigned int Rating()const {return rating;};
        void ResetRating(unsigned int r){rating =r;};
};
#endif