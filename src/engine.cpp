#include "raylib.h"
#include "engine.h"
#include "input.h"
#include "entity.h"
#include "scene.h"

void Engine_Update();
static void Engine_Draw();

static bool engine_running = true;

Screen2 main_screen;

void Engine_Init()
{
    InitWindow(main_screen.showScreenWidth(), main_screen.showScreenHeight(), "Custom Game Engine");
    SetTargetFPS(60);

    Scene_Init();
    Entity_Init();
}

void Engine_Run()
{
    
    while(!WindowShouldClose() && engine_running)
    {
        Engine_Update();
        Engine_Draw();
    }
}

void Engine_Update()
{
    Scene_Update();
    Entity_Update();
}

static void Engine_Draw()
{
    BeginDrawing();
    ClearBackground(WHITE);

    Scene_Draw();
    
    EndDrawing();
}

void Engine_Shutdown()
{   
    // Entity_Shutdown();
    // Scene_Shutdown();
    CloseWindow();
}