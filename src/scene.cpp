#include "raylib.h"
#include "scene.h"
#include "entity.h"


void Scene_Init()
{
    current_scene = SCENE_MENU;
}

void Scene_Shutdown()
{

}

void Scene_Switch(SceneID newScene)
{
    current_scene = newScene;
}

void Scene_Update()
{
    if(current_scene == SCENE_MENU)
    {
        if(IsKeyPressed(KEY_ENTER))
        {
            Scene_Switch(SCENE_GAMEPLAY);
        }
    }
    if(current_scene == SCENE_GAMEPLAY)
    {
        if(IsKeyPressed(KEY_BACKSPACE))
        {
            Scene_Switch(SCENE_MENU);
        }
    }
}

void Scene_Draw()
{
    if (current_scene == SCENE_MENU) 
    {
        DrawText("Menu - Press ENTER to Play", GetScreenWidth()/2, GetScreenHeight()/2, 20, BLACK);
    } 
    else if (current_scene == SCENE_GAMEPLAY) 
    {
        
        DrawText("Gameplay Scene", GetScreenWidth()/2, GetScreenHeight()/2, 20, DARKGRAY);
        Entity_Draw();
    }
}
