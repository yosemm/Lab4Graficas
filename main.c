// Comando gcc main.c -o main -O2 -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

#include "raylib.h"

#define ANCHO 480
#define ALTO 380

int main(void)
{

    const int sWdith = ANCHO;
    const int sHeight = ALTO;

    InitWindow(sWdith, sHeight, "Lab 4 Modelo");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(5, 5);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}