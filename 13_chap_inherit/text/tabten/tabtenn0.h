#ifndef TABTENN0_H_
#define TABTENN0_H_

class TableTennisPlayer
{
private:
    enum {LIM = 20};
    char firstname[LIM];
    char lastname[LIM];
    bool hasTable;
public : 
    TableTennisPlayer (const char* fn = "node", const char* ln = "none", bool ht = false);
    void Name()const;
    bool HasTable()const {return hasTable;};
    void ResetTable (bool v) {hasTable = v;};
    ~TableTennisPlayer();
    void Show (const TableTennisPlayer & rt);
};

class RatedPlayer : public TableTennisPlayer 
{
private:
    unsigned int rating;
public : 
    RatedPlayer (unsigned int r = 0, const char* fn = "none", const char* ln = "none",
            bool ht = false);
    RatedPlayer (unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() { return rating; };
    void ResetRating (unsigned int r) { rating = r;};
    ~RatedPlayer ();
};

#endif
