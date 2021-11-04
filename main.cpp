#include "raylib.h"

int main()
{
    //Window dimensions
    int width = 350;
    int height = 200;
   InitWindow(width, height, "Aaron's Window");

    //circle coordinates
    int circleX = width/2;
    int circleY = height/2;
    SetTargetFPS(60);
   while(WindowShouldClose() == false)
   {
       BeginDrawing();
       ClearBackground(WHITE);
       DrawCircle(circleX,circleY, 25.0f, RED);
       if(IsKeyDown(KEY_D))
       {
           circleX += 10;
       }
       else if(IsKeyDown(KEY_A))
       {
           circleX -= 10;
       }
       else if(IsKeyDown(KEY_W))
       {
           circleY -= 10;
       }
       else if (IsKeyDown(KEY_S))
       {
           circleY += 10;
       }
       EndDrawing();
   }
}