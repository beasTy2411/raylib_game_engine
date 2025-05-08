#ifndef ENGINE_H
#define ENGINE_H

class Screen2
{   private: 
    int screenWidth = 1280;
    int screenHeight = 720;

    public:
    int showScreenWidth()
    {
        return screenWidth;
    }
    int showScreenHeight()
    {
        return screenHeight;
    }
};


void Engine_Init();
void Engine_Update();
void Engine_Shutdown();
void Engine_Run();


#endif