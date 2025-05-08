#include "entity.h"
#include "raylib.h"
#include "input.h"


int posX = GetScreenWidth()/2;
int posY = GetScreenHeight()/2;
int radius = 20;

void Entity_Init()
{
    DrawCircle(posX, posY, radius, GREEN);
}

void Entity_Update() 
{
   if(Input_IsKeyDown(KEY_UP))
   {
    if(posY - radius < 0)
    {
        posY = 0;
    }
    else
    {
        posY -= 2;
    }
   }
   else if(Input_IsKeyDown(KEY_DOWN))
   {
    if(posY + radius > GetScreenHeight())
    {
        posY = GetScreenHeight();
    }
    else
    {
        posY += 2;
    }
   }
   else if(Input_IsKeyDown(KEY_LEFT))
   {
    if(posX - radius < 0)
    {
        posX = 0;
    }
    else
    {
        posX -= 2;
    }
   }
   else if(Input_IsKeyDown(KEY_RIGHT))
   {
    if(posY + radius > GetScreenWidth())
    {
        posX = 0;
    }
    else
    {
        posX += 2;
    }
   }
}

void Entity_Draw() 
{
    DrawCircle(posX, posY, radius, GREEN);
}

void Entity_Shutdown() {
    // Nothing yet
}