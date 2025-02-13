#ifndef DEFAULTPLAYER_H
#define DEFAULTPLAYER_H

#include "AbstractPlayer.h"

class DefaultPlayer : public AbstractPlayer
{
public:
    DefaultPlayer();
    DefaultPlayer* mutate();
    DefaultPlayer* mate(DefaultPlayer*);
    static DefaultPlayer* random();

    DefaultPlayer* fromFile(std::string);
    void toFile(std::string);

    int makeMove(int[][7], int);
};

#endif // DEFAULTPLAYER_H
