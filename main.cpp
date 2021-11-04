#include "raylib.h"

int main()
{
    //Window dimensions
    int width = 800;
    int height = 450;
   InitWindow(width, height, "Aaron's Window");

    //circle coordinates
    int circleX = width/2;
    int circleY = height/2;
    float radius = 25;
    float circleSpeed = 7.5f;
    //circle edges
    int circleLeftEdge = circleX - radius;
    int circleRightEdge = circleX + radius;
    int circleTopEdge = circleY - radius;
    int circleBottomEdge = circleY + radius;

    //axe coordinates
    int axeX = 400;
    int axeY = 0;
    int axeHeight = 50;
    int axeWidth = 50;
    //axe edges
    int axeLeftEdge = axeX;
    int axeRightEdge = axeX + axeWidth;
    int axeTopEdge = axeY;
    int axeBottomEdge = axeY + axeHeight;

    int direction = 10;
    SetTargetFPS(60);
   while(WindowShouldClose() == false)
   {
       BeginDrawing();
       ClearBackground(WHITE);
       DrawCircle(circleX,circleY, radius, RED);

       DrawRectangle(axeX, axeY, axeWidth, axeHeight, GREEN);
       axeY += direction;
       if(axeY > height || axeY < 0)
        direction = -direction;
       
       if(IsKeyDown(KEY_D) && circleX < width)
       {
           circleX += circleSpeed;
       }
       else if(IsKeyDown(KEY_A) && circleX > 0)
       {
           circleX -= circleSpeed;
       }
       else if(IsKeyDown(KEY_W) && circleY >0)
       {
           circleY -= circleSpeed;
       }
       else if (IsKeyDown(KEY_S) && circleY < height)
       {
           circleY += circleSpeed;
       }
       EndDrawing();
   }
}