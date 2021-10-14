#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Brick.h"
///CONCERTE CLASS  
class BricksFactory
{
public:
virtual std::vector<Bricks *> getBricks(int numberofBricks)=0;
};   