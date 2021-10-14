#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Brick.h"

//
class Lego: public Bricks{

void render()
{
    std::cout<<"LegoBricks"<<std::endl;
}
};