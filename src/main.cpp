#include "raylib.h"
#include "engine.h"

int main()
{   
    Engine_Init();
    Engine_Update();
    Engine_Run();
    Engine_Shutdown();

    return 0;
}