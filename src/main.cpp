#include "raylib.h"
#include "engine.h"

int main(void)
{   
    int WindowWidth = 1200;
    int WindowHeight = 800;
    int BallRadius = 15;
    Color BackgroundColor = {50,200,150,200};
    Color RightHalfColor = {50,200,125,200};
    Color MidCircleColor = {255,255,255,50};
    InitWindow(WindowWidth, WindowHeight, "My New Window");
    SetTargetFPS(60);


    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BackgroundColor);

        DrawRectangle(0,0,WindowWidth/2,WindowHeight, RightHalfColor);
        DrawLine(WindowWidth/2, 0, WindowWidth/2, WindowHeight, LIGHTGRAY);
        DrawCircle(WindowWidth/2,WindowHeight/2, 100,MidCircleColor); // Drawing the board circle
        DrawCircle(WindowWidth/2, WindowHeight/2, BallRadius, WHITE); // Drawing the ball
        

        EndDrawing();
        
    }

    CloseWindow();
    return 0;
}