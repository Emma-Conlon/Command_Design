#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Brick.h"

//
class Clay: public Bricks{

void render()
{
    std::cout<<"ClayBricks"<<std::endl;
}
};