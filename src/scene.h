#ifndef SCENE_H
#define SCENE_H


typedef enum{
    SCENE_MENU,
    SCENE_GAMEPLAY
}SceneID;

void Scene_Init();
void Scene_Update();
void Scene_Draw();
void Scene_Switch(SceneID newScene);
void Scene_Shutdown();

#endif