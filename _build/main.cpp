#include "raylib.h"
#include <iostream>
using namespace std;

int main(void)
{
    InitWindow(1200, 800, "basic window");

    Texture2D scarfy = LoadTexture("./resources/scarfy.png");
    //float frameWidth = (float)(scarfy.width / 6);
    //float timer = 0;
    //int frame = 0;
    //int MaxFrames = (scarfy.width / frameWidth);

    float x = 32.0f, y = 32.0f;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        /*timer += GetFrameTime();

        if (timer > 0.13f)
        {
            timer = 0.0;
            frame++;
        }
        frame %= MaxFrames;*/

        if (IsKeyDown(KEY_W))
        {
            y -= 0.2f;
        }
        else if (IsKeyDown(KEY_A))
        {
            x -= 0.3f;
        }
        else if (IsKeyDown(KEY_S))
        {
            y += 0.2f;
        }
        else if (IsKeyDown(KEY_D))
        {
            x += 0.3f;
        }

        DrawTexturePro(
            scarfy, 
            Rectangle{ 0, 0, 128 , 128 },
            Rectangle{ x, y, 128 , 128 },
            Vector2{0, 0}, 0, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}