//this is the player's cpp file
#include "player.h"


using namespace P;
using namespace std;


double player::getHealth(PLAYER *p)
{
    return p->health;
}

vector<char> player::getInv(PLAYER *p)
{
    return p->inv;
}

vector<char> player::getEquips(PLAYER *p)
{
    return p->equips;
}
