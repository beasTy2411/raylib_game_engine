#include "input.h"
#include "raylib.h"

bool Input_IsKeyPressed(int key)
{
    return IsKeyPressed(key);
}

bool Input_IsKeyDown(int key)
{
    return IsKeyDown(key);
}